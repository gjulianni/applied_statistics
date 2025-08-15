#include <stdio.h>
#include <math.h>
#include "../dispersion_measures/deviation/standard_deviation.h"

// The deviation's coefficiet is the reason between the standard deviation and the average, multiplied by 100.
// The collection that gives higher variance coefficient has more relative dispersion than it's average, i.e. it is 
// proportionally more unstable/variable.

int main() {

    int dataNums[] = {1, 3, 5};
    int anotherData[] = {53, 55, 57};
    
    int length = 3;
    int sum = 0;
    // Obtain the average value of the two data collections

    for(int i = 0; i < length; i++) {
        sum = sum + dataNums[i];
    }
    float avg1 = (float)sum / length;

    sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + anotherData[i];
    }
    float avg2 = (float)sum / length;

    float group1 = standard_deviation(dataNums, length);
    float group2 = standard_deviation(anotherData, length);

    float cv1 = (group1 / avg1) * 100;
    float cv2 = (group2 / avg2) * 100;

    printf("CV1: %.2f%%\nCV2: %.2f%%\n", cv1, cv2);

    return 0;
}