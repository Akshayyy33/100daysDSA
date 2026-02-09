#include <stdio.h>
int fibonacc(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacc(n - 1) + fibonacc(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacc(n));
    return 0;
}
