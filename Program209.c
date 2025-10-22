#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char s[]){
    int i=0, j=strlen(s)-1;
    if(j>=0 && s[j]=='\n') j--;
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++; j--;
    }
    return 1;
}
int main(){
    char s[200]; fgets(s,200,stdin);
    printf(isPalindrome(s)?"Palindrome\n":"Not palindrome\n");
    return 0;
}
