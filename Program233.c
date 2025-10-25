/* Program 3: Day of Week from number */
#include <stdio.h>

int main() {
    int d;
    printf("Enter day number (1-7): ");
    if (scanf("%d", &d) != 1) return 0;
    switch(d) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day.\n"); break;
    }
    return 0;
}
