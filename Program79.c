#include<stdio.h>
void main() 
{
  int n,sum=0,num; printf("How many numbers? "); scanf("%d",&n);
    for(int i=0;i<n;i++){ printf("Enter number: "); scanf("%d",&num); sum+=num;}
    printf("Sum=%d\n", sum);
}
