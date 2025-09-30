#include<stdio.h>
void main() 
{
  int n, i, temp, sum, rem;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Armstrong numbers: ");
    for (i = 1; i <= n; i++) {
        temp = i; sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if (sum == i) printf("%d ", i);
    }
    printf("\n");
}
