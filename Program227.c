#include <stdio.h>

int missingNumber(int a[], int n){ // array of size n-1 containing numbers 1..n
    long long total = (long long)n*(n+1)/2;
    long long s=0;
    for(int i=0;i<n-1;i++) s+=a[i];
    return (int)(total - s);
}
int main(){
    int n; scanf("%d",&n); int a[n-1];
    for(int i=0;i<n-1;i++) scanf("%d",&a[i]);
    printf("%d\n", missingNumber(a,n));
    return 0;
}
