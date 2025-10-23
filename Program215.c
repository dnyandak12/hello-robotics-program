#include <stdio.h>

void cumProduct(int a[], int n, long long out[]){
    long long p=1;
    for(int i=0;i<n;i++){ p*=a[i]; out[i]=p; }
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long out[n];
    cumProduct(a,n,out);
    for(int i=0;i<n;i++) printf("%lld ", out[i]);
    printf("\n");
    return 0;
}
