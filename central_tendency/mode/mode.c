#include <stdio.h>
#include <math.h>

// Mode is used to get the most repeated element in a data collection.
// If two exact same elements appear equally repeated, then each data is a mode and they are called bimodal.

int main() {

    int dataNums[] = {1, 3, 8, 8, 8, 5, 5, 7, 4, 9};
    int arrLength = sizeof(dataNums) / sizeof(dataNums[0]);

    int key = 0;
    int count = 1;
    int max_count = 0;
    int mode;

    for(int i = 0; i < arrLength - 1; i++) {
        key = dataNums[i];
        if (key == dataNums[i + 1]) {
            count++;

            if(count > max_count) {
                mode = key;
                max_count = count;
            }
        } else {
            count = 1;
        }

    }

    printf("%i\n", mode);
    return 0;
}
