#include<stdio.h>
void main() 
{
  float p, r, t;
    printf("Enter P, R, T: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Simple Interest = %.2f\n", (p * r * t) / 100);
}
