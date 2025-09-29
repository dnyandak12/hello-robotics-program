#include<stdio.h>
void main() 
{
  int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n != 0) {
        count++;
        n /= 10;
    }
    printf("Digits = %d\n", count);
}
