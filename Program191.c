#include <stdio.h>

int secondLargest(int a[], int n){
    int max1=-2147483648, max2=-2147483648;
    for(int i=0;i<n;i++){
        if(a[i]>max1){ max2=max1; max1=a[i]; }
        else if(a[i]>max2 && a[i]!=max1) max2=a[i];
    }
    return max2;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Second largest = %d\n", secondLargest(a,n));
    return 0;
}
