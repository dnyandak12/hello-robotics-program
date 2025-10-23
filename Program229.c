#include <stdio.h>

int arePermutations(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<n;j++) if(a[i]==b[j]){ found=1; b[j]=2147483647; break; }
        if(!found) return 0;
    }
    return 1;
}
int main(){
    int n; scanf("%d",&n); int a[n], b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    printf(arePermutations(a,b,n)?"Yes\n":"No\n");
    return 0;
}
