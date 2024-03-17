<<<<<<< Updated upstream
#include <stdio.h>
#include <string.h>

#define max 100

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[max];
    printf("Please enter the string: ");
    scanf("%s", str);

    int length = strlen(str);
    reverseString(str, 0, length - 1);

    printf("The reversed string: %s\n", str);
    return 0;
}

=======
#include <stdio.h>
#include <string.h>

#define max 100

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[max];
    printf("Please enter the string: ");
    scanf("%s", str);

    int length = strlen(str);
    reverseString(str, 0, length - 1);

    printf("The reversed string: %s\n", str);
    return 0;
}

>>>>>>> Stashed changes
