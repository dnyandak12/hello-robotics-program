#include<stdio.h>
void main() 
{
  char s[100]; int i,v=0,c=0;
    printf("Enter string: ");
    scanf(" %[^\n]",s);
    for(i=0;s[i]!='\0';i++) {
        if(strchr("aeiouAEIOU",s[i])) v++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) c++;
    }
    printf("Vowels=%d Consonants=%d\n",v,c);
}
