#include<stdio.h>
void main() 
{
  int n,flag=1;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<=1) flag=0;
    for(int i=2;i<=n/2;i++) if(n%i==0) flag=0;
    if(flag && n>10) printf("Prime and greater than 10\n");
    else printf("Not satisfying condition\n");
}
