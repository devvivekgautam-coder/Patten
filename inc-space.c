#include <stdio.h>

int main () {
    int i, j, s;

    for (i = 1; i <= 5; i++) {
        for (s = i; s > 1; s--) {
            printf("_ ");
        }
        for (j = 5; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
