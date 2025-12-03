#include <stdio.h>

int main(void) {
    float matrix1[2][3];
    float matrix2[3][2];

    for (int i = 0; i < 6; i++) {
        scanf("%f", &matrix1[i / 3][i % 3]);
    }
    for (int i = 0; i < 6; i++) {
        scanf("%f", &matrix2[i / 2][i % 2]);
    }
    
    printf("The first matrix you entered is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f ", matrix2[i][j]);
        }
        printf("\n");
    }


    printf("The multiplication product of matrix A and B is\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            float sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            printf("%.2f ", sum);
        }
        printf("\n");
    }

    return 0;
}

