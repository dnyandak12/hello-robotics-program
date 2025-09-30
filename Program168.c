#include<stdio.h>
void main() 
{
  char s[100]; int i,len=0;
    printf("Enter string: ");
    scanf(" %[^\n]",s);
    for(i=0;s[i]!='\0';i++) len++;
    printf("Length = %d\n",len);
}
