#include <stdio.h>
int powerr(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * powerr(a, b - 1);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b); 
    printf("%d^%d = %d\n", a, b, powerr(a, b)); 
    return 0;
}
