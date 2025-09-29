#include<stdio.h>
void main() 
{
  int n; printf("How many numbers? "); scanf("%d",&n);
    float sum=0,num;
    for(int i=0;i<n;i++){ printf("Enter number: "); scanf("%f",&num); sum+=num;}
    printf("Average=%.2f\n", sum/n);
}
