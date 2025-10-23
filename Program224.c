#include <stdio.h>

int longestInc(int a[], int n){
    int best=1, curr=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) curr++;
        else { if(curr>best) best=curr; curr=1; }
    }
    if(curr>best) best=curr;
    return best;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d\n", longestInc(a,n));
    return 0;
}
