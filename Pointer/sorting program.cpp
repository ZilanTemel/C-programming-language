#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *ptr, i, j, n, tmp;

    printf("Please enter the size of the array:\n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    printf("Please enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                tmp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = tmp;
            }
        }
    }

    printf("\nThe elements in the array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);

    return 0;
}

