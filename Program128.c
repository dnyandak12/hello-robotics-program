#include<stdio.h>
void main() 
{
  int n, i, j, flag;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: ", n);
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { flag = 0; break; }
        }
        if (flag) printf("%d ", i);
    }
    printf("\n");
}
