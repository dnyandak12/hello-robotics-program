#include<stdio.h>
void main() 
{
  char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
    if(c>='A' && c<='Z') printf("Uppercase\n");
    else if(c>='a' && c<='z') printf("Lowercase\n");
    else printf("Not a letter\n");
}
