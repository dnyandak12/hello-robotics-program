#include <stdio.h>

void mergeArrays(int a[], int n, int b[], int m, int c[]){
    for(int i=0;i<n;i++) c[i]=a[i];
    for(int i=0;i<m;i++) c[n+i]=b[i];
}
int main(){
    int n,m; scanf("%d%d",&n,&m);
    int a[n], b[m], c[n+m];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    mergeArrays(a,n,b,m,c);
    for(int i=0;i<n+m;i++) printf("%d ",c[i]);
    printf("\n");
    return 0;
}
