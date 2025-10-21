#include <stdio.h>

int binarySearch(int a[], int n, int key){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==key) return m;
        else if(a[m]<key) l=m+1;
        else r=m-1;
    }
    return -1;
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int key; scanf("%d",&key);
    int idx=binarySearch(a,n,key);
    printf(idx==-1?"Not found\n":"Found\n");
    return 0;
}
