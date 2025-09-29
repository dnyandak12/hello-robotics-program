#include<stdio.h>
void main() 
{
  float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Cannot divide by zero!\n");
}
