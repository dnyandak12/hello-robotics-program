/* Program 2: Calculator using switch */
#include <stdio.h>

int main() {
    int op;
    double a, b;
    printf("1:+ 2:- 3:* 4:/\nChoose operation: ");
    if (scanf("%d %lf %lf", &op, &a, &b) != 3) return 0;
    switch(op) {
        case 1: printf("Result = %g\n", a + b); break;
        case 2: printf("Result = %g\n", a - b); break;
        case 3: printf("Result = %g\n", a * b); break;
        case 4: 
            if (b == 0) printf("Division by zero!\n");
            else printf("Result = %g\n", a / b);
            break;
        default: printf("Invalid operation.\n"); break;
    }
    return 0;
}
