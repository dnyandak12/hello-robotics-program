#include <stdio.h>

int indexOfMax(int a[], int n){
    int idx=0;
    for(int i=1;i<n;i++) if(a[i]>a[idx]) idx=i;
    return idx;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Index of max = %d\n", indexOfMax(a,n));
    return 0;
}
