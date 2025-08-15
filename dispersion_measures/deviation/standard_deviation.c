#include <stdio.h>
#include <math.h>

// Used to resolve the dimensional problem of the variance, extracting it's square root.

float standard_deviation(int dataNums[], int length) {

    float sum = 0;
    float avg = 0;
    float deviation = 0;

    for(int i = 0; i < length; i++) {
        sum = sum + dataNums[i];
    }
    avg = sum / length;

    sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + pow(dataNums[i] - avg, 2.0);
    }
    deviation = sqrt(sum / (length - 1));

    return deviation;

}