#include<stdio.h>
void main() 
{
  int n,i,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) { scanf("%d",&a[i]); sum+=a[i]; }
    printf("Sum = %d\n",sum);
}
