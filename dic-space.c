#include <stdio.h>

int main()
{
    int i, j, s;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (int s = 'E'; s > i; s--)
        {
            printf("_ ");
        }

        for (char j = i; j >= 'A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}