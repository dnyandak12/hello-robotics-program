#include<stdio.h>
void main() 
{
  int n,i,fact=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) fact*=i;
    printf("Factorial = %d\n",fact);
}
