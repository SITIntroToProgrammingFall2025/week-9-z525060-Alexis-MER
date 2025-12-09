#include <stdio.h>

int main(void) {
    int colors[5][3] = {
        {255, 0, 0},
        {0, 255, 0},
        {0, 0, 255},
        {0, 0, 0},
        {255, 255, 255}
    };

    char color_names[5][6] = {
        "Red",
        "Green",
        "Blue",
        "Black",
        "White"
    };

    int input[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &input[i]);
    }
    
    int min_abs_diff = 999;
    int min_index = -1;

    for (int i = 0; i < 5; i++) {
        int abs_diff = 0;
        for (int j = 0; j < 3; j++) {
            int diff = colors[i][j] - input[j];
            if (diff < 0) {
                diff = -diff;
            }
            abs_diff += diff;
        }
        if (abs_diff < min_abs_diff) {
            min_abs_diff = abs_diff;
            min_index = i;
        }
    }

    printf("The nearest color is %s\n", color_names[min_index]);

    return 0;
}
