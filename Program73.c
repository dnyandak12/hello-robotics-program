#include<stdio.h>
void main() 
{
  int n,flag=1; printf("Enter number: "); scanf("%d",&n);
    if(n<=1) flag=0;
    for(int i=2;i<=n/2;i++) if(n%i==0) flag=0;
    if(flag && n>10) printf("Prime and >10\n");
    else if(flag) printf("Prime\n");
    else printf("Not prime\n");
}
