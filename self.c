#include <stdio.h>

int main()
{

    int i, j;

    // for (i =5; i >=1; i--) {
    //     for (j = i; j>=1; j--) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 5; j >= i; j--)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }


    for (j = 1; j <= 5; j++) {
        for (i = j; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}