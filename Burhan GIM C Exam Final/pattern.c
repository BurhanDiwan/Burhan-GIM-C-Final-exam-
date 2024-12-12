#include <stdio.h>

int main() {
    int i, j, k;
    char ch;


    for (i = 0; i < 5; i++) {

        for (j = 0; j < 4 - i; j++) {
            printf(" ");
        }


        for (k = i; k >= 0; k--) {
            ch = 'A' + k;
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
