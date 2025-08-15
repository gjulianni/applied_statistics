#include <stdio.h>
#include "standard_deviation.h"

int main() {
    int dataNums[] = {37, 38, 39, 41, 41, 41, 42, 44, 45, 47};
    int length = sizeof(dataNums) / sizeof(dataNums[0]);

    float deviation = standard_deviation(dataNums, length);

    printf("%.2f\n", deviation);

    return 0;
}

