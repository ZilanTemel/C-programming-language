#include <stdio.h>

struct myDate {
    int day;
    int month;
    int year;
};

int main() {
    struct myDate x, y;
    printf("Enter your date of birth (day month year): ");
    scanf("%d %d %d", &x.day, &x.month, &x.year);

    printf("Enter today's date (day month year): ");
    scanf("%d %d %d", &y.day, &y.month, &y.year);

    if (x.day > y.day) {
        y.day += 30;
        y.month -= 1;
        if (x.month > y.month) {
            y.month += 12;
            y.year -= 1;
        }
    }
    int years = y.year - x.year;
    int months = y.month - x.month;
    int days = y.day - x.day;

    printf("\nThere are %d days, %d months, and %d years difference between two dates.\n\n", days, months, years);

    return 0;
}

