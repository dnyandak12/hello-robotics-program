#include <stdio.h>

int linearSearch(int a[], int n, int key){
    for(int i=0;i<n;i++) if(a[i]==key) return i;
    return -1;
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int key; scanf("%d",&key);
    int idx = linearSearch(a,n,key);
    if(idx==-1) printf("Not found\n"); else printf("Found at %d\n", idx);
    return 0;
}
