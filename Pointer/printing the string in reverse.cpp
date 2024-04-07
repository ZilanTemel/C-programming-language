#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *ptr, i, n;

    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1; 
    }

    printf("Please enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("The reverse of the array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);

    return 0; 
}

