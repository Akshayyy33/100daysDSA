// Missing number in array
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    long  real_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        real_sum += arr[i];
    }
    long  total = (long )(n + 1) * (n + 2) / 2;
    long  missing = total - actual_sum;
    printf("%ld\n", missing);
    return 0;
}
