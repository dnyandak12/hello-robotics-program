/* Program 1: Robot Modes - Idle, Active, Error */
#include <stdio.h>

int main() {
    int mode;
    printf("1: Idle\n2: Active\n3: Error\nEnter choice: ");
    if (scanf("%d", &mode) != 1) return 0;
    switch(mode) {
        case 1: printf("Robot is in IDLE mode.\n"); break;
        case 2: printf("Robot is in ACTIVE mode.\n"); break;
        case 3: printf("Robot is in ERROR mode.\n"); break;
        default: printf("Invalid choice.\n"); break;
    }
    return 0;
}
