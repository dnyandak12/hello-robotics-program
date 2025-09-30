#include<stdio.h>
void main() 
{
  int n, bin[32], i=0;
    printf("Enter decimal: ");
    scanf("%d", &n);
    while(n>0) {
        bin[i++] = n%2;
        n/=2;
    }
    printf("Binary: ");
    for(i=i-1;i>=0;i--) printf("%d", bin[i]);
    printf("\n");
}
