#include <stdio.h>

void moveZeros(int a[], int n){
    int pos=0;
    for(int i=0;i<n;i++) if(a[i]!=0) a[pos++]=a[i];
    while(pos<n) a[pos++]=0;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    moveZeros(a,n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
