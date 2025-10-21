#include <stdio.h>

void rotateLeft(int a[], int n, int k){
    k = k % n;
    int tmp[k];
    for(int i=0;i<k;i++) tmp[i]=a[i];
    for(int i=0;i<n-k;i++) a[i]=a[i+k];
    for(int i=0;i<k;i++) a[n-k+i]=tmp[i];
}
int main(){
    int n,k; scanf("%d%d",&n,&k);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    rotateLeft(a,n,k);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
