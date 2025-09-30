#include<stdio.h>
void main() 
{
  int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){sum+=temp%10; temp/=10;}
    printf("Sum of digits = %d\n", sum);
}
