#include <stdio.h>

void countEvenOdd(int a[], int n, int *even, int *odd){
    *even = *odd = 0;
    for(int i=0;i<n;i++) (a[i]%2==0)?(*even)++:(*odd)++;
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int e,o; countEvenOdd(a,n,&e,&o);
    printf("Even=%d Odd=%d\n", e,o);
    return 0;
}
