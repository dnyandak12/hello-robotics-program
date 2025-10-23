#include <stdio.h>

int square(int x){ return x*x; }
int increment(int x){ return x+1; }

void apply(int a[], int n, int (*f)(int)){
    for(int i=0;i<n;i++) a[i]=f(a[i]);
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    // use square
    apply(a,n,square);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
