#include <stdio.h>

int main(void) {
    int matrix[2][2];
    float determinant = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &matrix[i / 2][i % 2]);
    }

    printf("You entered\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("Determinant is %f\n", determinant);

    return 0;
}

