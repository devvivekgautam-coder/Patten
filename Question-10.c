#include <stdio.h>

int main()
{

    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = i; s <= 4; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        for (j = i - 1; j >= 1; j--)
        {
            if (j == 1)
            {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (s = i; s <= 4; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        for (j = i - 1; j >= 1; j--)
        {
            if (j == 1)
            {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}