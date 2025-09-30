#include<stdio.h>
void main() 
{
  int n, temp, sum = 0, rem, fact, i;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    if (sum == n) printf("%d is Strong Number\n", n);
    else printf("%d is Not Strong Number\n", n);
}
