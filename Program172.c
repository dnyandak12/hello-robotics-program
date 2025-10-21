#include <stdio.h>

int sumArray(int a[], int n){
    int s=0;
    for(int i=0;i<n;i++) s += a[i];
    return s;
}
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Sum = %d\n", sumArray(a,n));
    return 0;
}
