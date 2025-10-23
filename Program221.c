#include <stdio.h>

void fibonacci(int a[], int n){
    if(n>0) a[0]=0;
    if(n>1) a[1]=1;
    for(int i=2;i<n;i++) a[i]=a[i-1]+a[i-2];
}
int main(){
    int n; scanf("%d",&n); int a[n];
    fibonacci(a,n);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
