#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float StandartDeviationCalculator(float *array, int size);

int main() {
    int i, n;
    float *array;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    array = (float *)malloc(n * sizeof(float));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; ++i) {
        scanf("%f", (array + i));
    }

    printf("\nStandard Deviation = %.3f", StandartDeviationCalculator(array, n));

    free(array);
    
    return 0;
}

float StandartDeviationCalculator(float *array, int size) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < size; ++i) {
        sum += *(array + i);
    }
    mean = sum / size;
    for (i = 0; i < size; ++i) {
        SD += pow(*(array + i) - mean, 2);
    }
    return sqrt(SD / size);
}

