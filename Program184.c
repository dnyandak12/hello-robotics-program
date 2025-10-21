#include <stdio.h>

void freq(int a[], int n){
    int seen[n];
    for(int i=0;i<n;i++) seen[i]=0;
    for(int i=0;i<n;i++){
        if(seen[i]) continue;
        int c=1;
        for(int j=i+1;j<n;j++) if(a[j]==a[i]){ c++; seen[j]=1; }
        printf("%d occurs %d times\n", a[i], c);
    }
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    freq(a,n);
    return 0;
}
