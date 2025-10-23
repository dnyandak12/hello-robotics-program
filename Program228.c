#include <stdio.h>

void stablePartitionNeg(int a[], int n){
    int b[n], idx=0;
    for(int i=0;i<n;i++) if(a[i]<0) b[idx++]=a[i];
    for(int i=0;i<n;i++) if(a[i]>=0) b[idx++]=a[i];
    for(int i=0;i<n;i++) a[i]=b[i];
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    stablePartitionNeg(a,n);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
