#include <stdio.h>

int maxSubArray(int a[], int n){
    int max_ending = a[0], max_so_far = a[0];
    for(int i=1;i<n;i++){
        max_ending = (a[i] > max_ending + a[i]) ? a[i] : max_ending + a[i];
        if(max_ending > max_so_far) max_so_far = max_ending;
    }
    return max_so_far;
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d\n", maxSubArray(a,n));
    return 0;
}
