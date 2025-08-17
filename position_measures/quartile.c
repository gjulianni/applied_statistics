#include <stdio.h>
#include <math.h>

// Quartiles are numbers that divide roughly an ordered collection of data into four equal parts.

int main() {

    int dataNums[] = {5, 7, 9, 10, 11, 13, 14, 15, 16, 17, 18, 18, 20, 21, 37};
    int arrLength = sizeof(dataNums) / sizeof(int);

    int lowerLength = arrLength / 2;
    int upperLength = arrLength / 2;

    int lower[lowerLength];
    int upper[upperLength];

    float median = 0.0;
    float lowerMedian = 0.0;
    float upperMedian = 0.0;

    if (arrLength % 2 == 0) {

        int middle1 = dataNums[arrLength / 2 -1];
        int middle2 = dataNums[arrLength / 2];
        median = (middle1 + middle2) / 2.0;


    } else {
        median = dataNums[arrLength / 2];
    }

    for (int i = 0; i < (arrLength / 2); i++) {
        lower[i] = dataNums[i];
    }
    if (lowerLength % 2 == 0) {
        int lowerMiddle1 = lower[lowerLength / 2 - 1];
        int lowerMiddle2 = lower[lowerLength / 2];
        lowerMedian = (lowerMiddle1 + lowerMiddle2) / 2.0;
    }
    else {
        lowerMedian = lower[lowerLength / 2];
    }

    int startIndex = (arrLength % 2 == 0) ? arrLength / 2 : arrLength / 2 + 1;

    for (int i = 0; i < upperLength; i++) {
    upper[i] = dataNums[i + startIndex];
    }
    if (upperLength % 2 == 0) {
        int upperMiddle1 = upper[upperLength / 2 - 1];
        int upperMiddle2 = upper[upperLength / 2];
        upperMedian = (upperMiddle1 + upperMiddle2) / 2.0;
    }
    else {
        upperMedian = upper[upperLength / 2];
    }

    printf("Q1 (lower median): %.2f\n", lowerMedian);
    printf("Q2 (median): %.2f\n", median);
    printf("Q3 (upper median): %.2f\n", upperMedian);

    return 0;
}