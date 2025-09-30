#include<stdio.h>
void main() 
{
  long bin;
    int dec=0, base=1, rem;
    printf("Enter binary: ");
    scanf("%ld", &bin);
    while(bin>0) {
        rem=bin%10;
        dec+=rem*base;
        base*=2;
        bin/=10;
    }
    printf("Decimal: %d\n", dec);
}
