#include<stdio.h>

int main() {
    int i, j, k, n, m, num = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < (i - 1) * 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < (i-1) * 2; j++) {
            printf(" ");
        }
        printf("*\n"); 
    }
    return 0;
}
