#include <stdio.h>

int size;
int i;
int max = -1;

int findMax(int arr[]) {
    if (i < size) {
        if (max < arr[i]) {
            max = arr[i];
        }
        i++;
        findMax(arr);  
    }
    return max;
}

int main() {
    printf("Please enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Please enter the elements of array:\n");

    for (i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    i = 0; 
    int result = findMax(arr);
    printf("The greatest element is: %d\n", result);

    return 0;
}

