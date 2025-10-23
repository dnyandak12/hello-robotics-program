#include <stdio.h>

int hasPairDiff(int a[], int n, int k){
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(abs(a[i]-a[j])==k) return 1;
    return 0;
}
int main(){
    int n,k; scanf("%d%d",&n,&k); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf(hasPairDiff(a,n,k)?"Yes\n":"No\n");
    return 0;
}
