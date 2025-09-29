#include<stdio.h>
void main() 
{
  int n; printf("Enter number: "); scanf("%d",&n);
    int fact=1; for(int i=1;i<=n;i++) fact*=i;
    printf("Factorial=%d\n", fact);
}
