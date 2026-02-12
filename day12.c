#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int a[x][y], b[x][y], c[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
