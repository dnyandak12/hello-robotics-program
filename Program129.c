#include<stdio.h>
void main() 
{
  int n, temp, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == n) printf("%d is Armstrong\n", n);
    else printf("%d is Not Armstrong\n", n);
}
