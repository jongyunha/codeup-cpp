#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i + j == n && i <= 6 && j <= 6)
            {
                printf("%d %d\n", i, j);
                break;
            }
        }
    }
    return 0;
}