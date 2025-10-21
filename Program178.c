#include <stdio.h>

void copyArray(int src[], int dst[], int n){
    for(int i=0;i<n;i++) dst[i]=src[i];
}
int main(){
    int n; scanf("%d",&n);
    int a[n], b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    copyArray(a,b,n);
    for(int i=0;i<n;i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
