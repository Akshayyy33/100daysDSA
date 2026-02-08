// Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>
int main()
{
    int n, k;
    int comp = 0;
    int foundIndex = -1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comp++;
        if (arr[i] == k) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comp);

    return 0;
}
