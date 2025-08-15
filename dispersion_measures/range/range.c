#include <stdio.h>
#include <math.h>

// The range of a collection data can be obtained by subtracting the max value by the min value.

int main() {

    int dataNums[] = {2, 3, 6, 9, 10};
    int length = sizeof(dataNums) / sizeof(dataNums[0]);

    int max_value = dataNums[0];
    int min_value = dataNums[0];

    for(int i = 1; i < length; i++) {

        if(dataNums[i] > max_value) max_value = dataNums[i];
        if(dataNums[i] < min_value) min_value = dataNums[i];
    }

    int result = max_value - min_value;
    printf("%i\n", result);

    return 0;
}