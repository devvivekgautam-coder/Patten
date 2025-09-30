#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            if (i % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}