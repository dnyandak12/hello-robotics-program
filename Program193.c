#include <stdio.h>

void splitPosNeg(int a[], int n){
    int j=0;
    for(int i=0;i<n;i++) if(a[i]<0){
        int t=a[i]; a[i]=a[j]; a[j]=t; j++;
    }
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    splitPosNeg(a,n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
