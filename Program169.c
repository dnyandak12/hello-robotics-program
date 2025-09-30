#include<stdio.h>
void main() 
{
  char s[100]; int i,len=0;
    printf("Enter string: ");
    scanf(" %[^\n]",s);
    while(s[len]!='\0') len++;
    printf("Reversed: ");
    for(i=len-1;i>=0;i--) printf("%c",s[i]);
    printf("\n");
}
