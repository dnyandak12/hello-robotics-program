#include<stdio.h>
void main() 
{
  int n,i,j,space;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(space=1;space<=n-i;space++) printf(" ");
        for(j=1;j<=i;j++) printf("%d ",i);
        printf("\n");
    }
}
