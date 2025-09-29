#include<stdio.h>
void main() 
{
  float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", (c * 9 / 5) + 32);
}
