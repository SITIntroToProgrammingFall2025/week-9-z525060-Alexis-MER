#include <stdio.h>

int main(void) {
    int matrix[3][3];

    for (int i = 0; i < 9; i++) {
        scanf("%d", &matrix[i / 3][i % 3]);
    }

    printf("You entered\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int tmp = 0;
    for (int i = 0; i < 3; i++) {
        tmp = matrix[i][0];
        matrix[i][0] = matrix[i][2];
        matrix[i][2] = tmp;
    }


    printf("Output\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

