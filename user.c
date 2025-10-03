#include <stdio.h>

int main()
{
    int i, j, s, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (s = i; s < n; s++) {
            printf("_ ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}