#include <stdio.h>

void squareElements(int a[], int n){
    for(int i=0;i<n;i++) a[i] = a[i]*a[i];
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    squareElements(a,n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
