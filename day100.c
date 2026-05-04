#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Pair;

void mergeSort(Pair* arr, int left, int right, int* count) {
    if (left >= right) return;

    int mid = (left + right) / 2;
    mergeSort(arr, left, mid, count);
    mergeSort(arr, mid + 1, right, count);

    Pair* temp = (Pair*)malloc((right - left + 1) * sizeof(Pair));

    int i = left, j = mid + 1, k = 0;
    int rightCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i].val <= arr[j].val) {
            count[arr[i].idx] += rightCount;
            temp[k++] = arr[i++];
        } else {
            rightCount++;
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        count[arr[i].idx] += rightCount;
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int t = 0; t < k; t++) {
        arr[left + t] = temp[t];
    }

    free(temp);
}

int* countSmaller(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* count = (int*)calloc(numsSize, sizeof(int));
    Pair* arr = (Pair*)malloc(numsSize * sizeof(Pair));

    for (int i = 0; i < numsSize; i++) {
        arr[i].val = nums[i];
        arr[i].idx = i;
    }

    mergeSort(arr, 0, numsSize - 1, count);

    free(arr);
    return count;
}
