#include<stdio.h>
void main() 
{
  int n, temp, rev = 0, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == n) printf("%d is Palindrome\n", n);
    else printf("%d is Not Palindrome\n", n);
}
