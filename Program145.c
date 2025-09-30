#include<stdio.h>
void main() 
{
  int x, y, i, pow=1;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    for (i=1;i<=y;i++) pow*=x;
    printf("%d^%d = %d\n", x, y, pow);
}
