#include<stdio.h>
void main() 
{
  int n; printf("Enter n: "); scanf("%d",&n);
    for(int i=1,count=0;count<n;i+=2,count++) printf("%d ", i);
    printf("\n");
}
