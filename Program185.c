#include <stdio.h>

int removeDuplicates(int a[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++) if(a[i]==a[j]) break;
        if(j==i) a[res++]=a[i];
    }
    return res;
}
int main(){
    int n; scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int newn = removeDuplicates(a,n);
    for(int i=0;i<newn;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
