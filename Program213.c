#include <stdio.h>
#include <ctype.h>

int countWords(char s[]){
    int inWord=0, count=0;
    for(int i=0; s[i]; i++){
        if(!isspace((unsigned char)s[i]) && !inWord){ inWord=1; count++; }
        else if(isspace((unsigned char)s[i])) inWord=0;
    }
    return count;
}
int main(){
    char s[500]; fgets(s,500,stdin);
    printf("Words = %d\n", countWords(s));
    return 0;
}
