#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    double *array;
    printf("please enter the size of array \n");
    scanf("%d",&n);
    
    array=(double*)calloc(n ,sizeof(double));
    if (array==NULL){
         printf("Error ! memory not allocated");
         exit(0);
    }
    for(i=0;i<n;i++){
        printf("enter number %d\n",i+1);
        scanf("%lf",array+i);
    }
    for(i=1;i<n;i++){
        if(*array< *(array+i)){
            *array=*(array+i);
        }
    }
    printf("largest number =%.2lf",*array);
    free(array);
    return 0;
    }
