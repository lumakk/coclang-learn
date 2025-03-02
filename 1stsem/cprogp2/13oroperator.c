#include <stdio.h>

int main() {
    int isWeekend = 1; // 1 represents true
    int isHoliday = 0; // 0 represents false

    if (isWeekend || isHoliday) {
        printf("You can relax today!\n");
    } else {
        printf("It's a workday.\n");
    }

    return 0;
}
