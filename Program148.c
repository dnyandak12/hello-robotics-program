
#include<stdio.h>
void main()
{
  int n, sq;
    printf("Enter number: ");
    scanf("%d", &n);
    sq = n*n;
    int temp=n, pow=1;
    while(temp>0){ pow*=10; temp/=10;}
    if (sq%pow==n) printf("%d is Automorphic\n", n);
    else printf("%d is Not Automorphic\n", n);
}
