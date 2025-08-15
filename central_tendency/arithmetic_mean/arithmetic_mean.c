#include <stdio.h>
#include <math.h>

// Used to obtain the average value of a data collection, being the most usual of the statistics measures.
// Do not use it if data is grouped on frequency-distribution tables.

int main() {

    int dataNums[] = {3, 3, 5, 8, 9};
    int arrLength = sizeof(dataNums) / sizeof(dataNums[0]);

    float sum = 0;

    for(int i = 0; i < arrLength; i++) {
        sum = sum + dataNums[i];
    }

    double avgValue = sum / arrLength;

    printf("%lf\n", avgValue);

    return 0;

}