#include<stdio.h>
void main() 
{
  int n, a = 0, b = 1, c;
    printf("Enter number: ");
    scanf("%d", &n);
    while (b < n) {
        c = a + b;
        a = b; b = c;
    }
    if (b == n || n == 0) printf("%d is Fibonacci\n", n);
    else printf("%d is Not Fibonacci\n", n);
}
