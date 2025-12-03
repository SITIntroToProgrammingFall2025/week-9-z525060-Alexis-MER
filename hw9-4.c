#include <stdio.h>

int main(void) {
    char vals[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    int input[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &input[i]);
    }
    char hexcode[8];

    hexcode[0] = '#';
    for (int i = 0; i < 3; i++) {
        int high = input[i] / 16;
        int low = input[i] % 16;
        hexcode[2*i + 1] = vals[high];
        hexcode[2*i + 2] = vals[low];
    }
    hexcode[7] = '\0';

    printf("The hex is %s\n", hexcode);

    return 0;
}
