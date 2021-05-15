#include<stdio.h>

int main()
{
    int n = 0, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            res += j;
        }
    }
    printf("%d\n", res);
}