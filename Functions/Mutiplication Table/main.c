#include <stdio.h>

void MultiplicationTable(int x);

int main() {
    int x = 1;
    MultiplicationTable(x);
    return 0;
}

void MultiplicationTable(int x) {
    int i;
    if (x <= 10) {
        for (i = 1; i <= 10; i++)
            printf("%-3d", x * i);
        printf("\n");
        MultiplicationTable(x + 1);
    } else {
        return 1;
    }
}

