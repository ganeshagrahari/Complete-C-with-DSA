// #include <stdio.h>

// int main() {
//     int sideLength;

//     printf("Enter the side length of the square: ");
//     scanf("%d", &sideLength);

//     for (int i = 0; i < sideLength; i++) {
//         for (int j = 0; j < sideLength; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int sideLength;

    printf("Enter the side length of the hollow square: ");
    scanf("%d", &sideLength);

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            if (i == 0 || i == sideLength - 1 || j == 0 || j == sideLength - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}