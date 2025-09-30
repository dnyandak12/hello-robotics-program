#include<stdio.h>
void main() 
{
  int n,temp,sum=0,digit;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum+=digit*digit*digit;
        temp/=10;
    }
    if(sum==n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
}
