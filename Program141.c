#include<stdio.h>
void main() 
{
  int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}
