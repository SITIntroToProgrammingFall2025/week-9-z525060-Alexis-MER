#include <stdio.h>

int main(void) {
    int input[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &input[i]);
    }

    int sorted[5];
    for (int i = 0; i < 5; i++) {
        sorted[i] = input[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    printf("sorted array:\n")
    for (int i = 0; i < 5; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");

    return 0;
}
