#include<stdio.h>
void main() 
{
  int n; printf("How many numbers? "); scanf("%d",&n);
    int num,max; printf("Enter number 1: "); scanf("%d",&max);
    for(int i=1;i<n;i++){ printf("Enter number %d: ", i+1); scanf("%d",&num); if(num>max) max=num;}
    printf("Maximum=%d\n", max);
}
