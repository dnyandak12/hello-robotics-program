#include <stdio.h>

void replaceNegZero(int a[], int n){
    for(int i=0;i<n;i++) if(a[i]<0) a[i]=0;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    replaceNegZero(a,n);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
