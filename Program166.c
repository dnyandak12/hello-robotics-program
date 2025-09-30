#include<stdio.h>
void main() 
{
  int n,m,i;
    printf("Enter size of first: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter size of second: ");
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    int c[n+m];
    for(i=0;i<n;i++) c[i]=a[i];
    for(i=0;i<m;i++) c[n+i]=b[i];
    printf("Merged array: ");
    for(i=0;i<n+m;i++) printf("%d ",c[i]);
    printf("\n");
}
