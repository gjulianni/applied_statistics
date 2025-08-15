#include <stdio.h>
#include <math.h>

// Using variance excludes the need to use module. In a collection of data, the average of deviation to the power of two is called variance.

int main() {

    int dataNums[] = {37, 38, 39, 41, 41, 41, 42, 44, 45, 47};
    int length = sizeof(dataNums) / sizeof(dataNums[0]);

    float sum = 0;
    float avg = 0;
    float variance = 0;

    for(int i = 0; i < length; i++) {
        sum = sum + dataNums[i];
    }
    avg = sum / length;

    sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + pow(dataNums[i] - avg, 2.0);
    }
    variance = sum / (length - 1);

    printf("%lf\n", variance);

    return 0;
}