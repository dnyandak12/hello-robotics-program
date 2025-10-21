#include <stdio.h>

void rotateRight(int a[], int n, int k){
    k = k % n;
    int tmp[k];
    for(int i=0;i<k;i++) tmp[i]=a[n-k+i];
    for(int i=n-1-k;i>=0;i--) a[i+k]=a[i];
    for(int i=0;i<k;i++) a[i]=tmp[i];
}
int main(){
    int n,k; scanf("%d%d",&n,&k);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    rotateRight(a,n,k);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
