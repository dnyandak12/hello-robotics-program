#include <stdio.h>
#include <ctype.h>

void countVC(char s[], int *v, int *c){
    *v = *c = 0;
    for(int i=0; s[i]; i++){
        char ch = tolower(s[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') (*v)++; else (*c)++;
        }
    }
}
int main(){
    char s[200]; fgets(s,200,stdin);
    int v,c; countVC(s,&v,&c);
    printf("Vowels=%d Consonants=%d\n",v,c);
    return 0;
}
