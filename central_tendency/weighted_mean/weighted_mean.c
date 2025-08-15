#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Weighted mean is used when each value of a data collection have different weights, i.e. those with higher importance (bigger weight)
// should influence more in the average.

// Generating random numbers in C is a bit odd and it's normal to obtain repeated results when executing the logic too fast. 
// If you want to minimize this occurence, simply increase the range of min-max values.

int main() {

    srand(time(NULL));

    int dataNums[] = {2, 6, 8, 10};
    int arrLength = sizeof(dataNums) / sizeof(dataNums[0]);

    int dataWeights[arrLength];

    int min_weight = 1;
    int max_weight = 10;

    int sum = 0;
    int weight_sum = 0;

    for(int i = 0; i < arrLength; i++) {

        int rd_num = (rand() % (max_weight - min_weight + 1)) + min_weight;
        dataWeights[i] = rd_num;
    }
    for(int i = 0; i < arrLength; i++) {

    int v = dataNums[i] * dataWeights[i];
    sum = sum + v;
    weight_sum = weight_sum + dataWeights[i];
    }

    int weightedMean = sum / weight_sum;
    printf("%i\n", weightedMean);

    return 0;

}