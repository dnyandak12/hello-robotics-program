#include <stdio.h>

int strLen(char s[]){
    int i=0; while(s[i]!='\0') i++;
    return i;
}
int main(){
    char s[100];
    fgets(s,100,stdin);
    if(s[0]=='\n') fgets(s,100,stdin); // handle leading newline
    printf("Length = %d\n", strLen(s)- (s[strlen(s)-1]=='\n'?1:0));
    return 0;
}
