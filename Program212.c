#include <stdio.h>

int strCmp(char a[], char b[]){
    int i=0;
    while(a[i] && b[i]){
        if(a[i]!=b[i]) return (a[i]-b[i]);
        i++;
    }
    return a[i]-b[i];
}
int main(){
    char a[200], b[200];
    fgets(a,200,stdin); fgets(b,200,stdin);
    printf(strCmp(a,b)==0?"Equal\n":"Not equal\n");
    return 0;
}
