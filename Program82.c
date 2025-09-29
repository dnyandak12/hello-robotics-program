#include<stdio.h>
void main() 
{
  int n; printf("How many numbers? "); scanf("%d",&n);
    int num,min; printf("Enter number 1: "); scanf("%d",&min);
    for(int i=1;i<n;i++){ printf("Enter number %d: ", i+1); scanf("%d",&num); if(num<min) min=num;}
    printf("Minimum=%d\n", min);
}
