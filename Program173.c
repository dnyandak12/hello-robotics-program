#include <stdio.h>

double average(int a[], int n){
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return (double)s / n;
}
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Average = %.2f\n", average(a,n));
    return 0;
}
