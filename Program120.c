#include<stdio.h>
void main()
{
  int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%2==0) printf("Even ");
    else printf("Odd ");
    if(n>0) printf("Positive\n");
    else if(n<0) printf("Negative\n");
    else printf("Zero\n");
}
