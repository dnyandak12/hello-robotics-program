#include <stdio.h>

void productExceptSelf(int a[], int n, long long out[]){
    for(int i=0;i<n;i++){
        long long p=1;
        for(int j=0;j<n;j++) if(i!=j) p*=a[j];
        out[i]=p;
    }
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long out[n];
    productExceptSelf(a,n,out);
    for(int i=0;i<n;i++) printf("%lld ", out[i]);
    printf("\n");
    return 0;
}
