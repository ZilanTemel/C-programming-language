#include <stdio.h>

#define PI 3.14159

int main() {
   
    float radius, perimeter, area;
    int operationType;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Choose the operation type (1: perimeter, 2: Area): ");
    scanf("%d", &operationType);

    
    if (operationType == 1) {
        
        perimeter = 2 * PI * radius;
        printf("Circumference of the circle: %.2f\n", perimeter);
    } 
    else if (operationType == 2) {
        
        area = PI * radius * radius;
        printf("Area of the circle: %.2f\n", area);
    } 
    else {
       
        printf("Invalid input! Please choose a valid operation type.\n");
    }

    return 0;
}

