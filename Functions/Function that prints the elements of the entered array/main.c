#include <stdio.h>
#include <stdlib.h>
#define max 100

void arrayElement(int arr[], int st, int length);

int main() {
    int arr[max];
    int n, i;
    printf("input the number of elements to be stored in the array:");
    scanf("%d", &n);
    printf("input %d element in the array:", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("the elements are:");
    arrayElement(arr, 0, n);
    return 0;
}

void arrayElement(int arr[], int st, int length) {
    if (st >= length)
        return;

    printf("%d ", arr[st]);
    arrayElement(arr, st + 1, length);
}

