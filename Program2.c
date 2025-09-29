#include<stdio.h>
int main()
{
    int A,B,sum;
    printf("Enter Temperature of first sensor: ",A);
    scanf("%d",&A);
    printf("Enter Temperature of second sensor: ",B);
    scanf("%d",&B);
    sum = A+B;
    printf("The sum of temperature from two sensors is = %d", sum);
    return 0;
}