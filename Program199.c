#include <stdio.h>

int dotProduct(int a[], int b[], int n){
    int s=0;
    for(int i=0;i<n;i++) s += a[i]*b[i];
    return s;
}
int main(){
    int n; scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    printf("Dot = %d\n", dotProduct(a,b,n));
    return 0;
}
