#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < 5 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
