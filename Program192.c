#include <stdio.h>

int kthSmallest(int a[], int n, int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) if(a[j]<a[i]){ int t=a[i]; a[i]=a[j]; a[j]=t; }
    }
    return a[k-1];
}
int main(){
    int n,k; scanf("%d%d",&n,&k);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d\n", kthSmallest(a,n,k));
    return 0;
}
