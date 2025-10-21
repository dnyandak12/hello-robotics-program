#include <stdio.h>

int hasPairSum(int a[], int n, int sum){
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(a[i]+a[j]==sum) return 1;
    return 0;
}
int main(){
    int n,s; scanf("%d%d",&n,&s);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf(hasPairSum(a,n,s)?"Yes\n":"No\n");
    return 0;
}
