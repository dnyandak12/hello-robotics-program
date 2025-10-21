#include <stdio.h>

void prefixSum(int a[], int n, int pref[]){
    pref[0]=a[0];
    for(int i=1;i<n;i++) pref[i]=pref[i-1]+a[i];
}
int main(){
    int n; scanf("%d",&n);
    int a[n], pref[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    prefixSum(a,n,pref);
    for(int i=0;i<n;i++) printf("%d ",pref[i]);
    printf("\n");
    return 0;
}
