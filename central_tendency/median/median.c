#include <stdio.h>
#include <math.h>

// Median is defined by the element that occupies the exact middle of the data collection 
// If the number of elements in array is even, then the median can be obtained by adding the two numbers in the middle 
// and extracting their arithmetic mean.

// In this example we will only use the case two scenario, since the first can be done by only viewing which element is in the middle.

int main() {

    int dataNums[] = {1, 3, 4, 4, 4, 5, 5, 7, 8, 9};
    int arrLength = sizeof(dataNums) / sizeof(dataNums[0]);
    int middle = dataNums[arrLength/2];

    float median = 0.0;

    if(arrLength % 2 == 0) {

        int middle1 = dataNums[arrLength / 2 -1];
        int middle2 = dataNums[arrLength / 2];
        median = (middle1 + middle2) / 2.0;
    } else {
        median = dataNums[arrLength / 2];
    }

    printf("%lf", median);
    return 0;

}