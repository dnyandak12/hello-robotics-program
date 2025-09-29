#include<stdio.h>
void main() 
{
  float p, r, t;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest = %.2f\n", (p * r * t) / 100);
}
