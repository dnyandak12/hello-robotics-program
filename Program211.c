#include <stdio.h>
#include <string.h>

void concat(char a[], char b[]){
    int i=strlen(a);
    if(i>0 && a[i-1]=='\n') { a[i-1]='\0'; i--; }
    int j=0;
    while(b[j]){ a[i++]=b[j++]; }
    a[i]='\0';
}
int main(){
    char a[500], b[200];
    fgets(a,500,stdin); fgets(b,200,stdin);
    concat(a,b);
    printf("%s\n", a);
    return 0;
}
