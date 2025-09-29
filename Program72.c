#include<stdio.h>
void main() 
{
  int n; printf("Enter number: "); scanf("%d",&n);
    if(n>=0 && n%2==0) printf("Positive Even\n");
    else if(n>=0 && n%2!=0) printf("Positive Odd\n");
    else if(n<0 && n%2==0) printf("Negative Even\n");
    else printf("Negative Odd\n");
}
