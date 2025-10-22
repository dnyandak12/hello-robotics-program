#include <stdio.h>
#include <string.h>

void reverseStr(char s[]){
    int n=strlen(s);
    if(n>0 && s[n-1]=='\n') { n--; s[n]='\0'; }
    for(int i=0;i<n/2;i++){
        char t=s[i]; s[i]=s[n-1-i]; s[n-1-i]=t;
    }
}
int main(){
    char s[200];
    fgets(s,200,stdin);
    reverseStr(s);
    printf("%s\n", s);
    return 0;
}
