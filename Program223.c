#include <stdio.h>

int mode(int a[], int n){
    int maxCount=0, modeVal=a[0];
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++) if(a[j]==a[i]) count++;
        if(count>maxCount){ maxCount=count; modeVal=a[i]; }
    }
    return modeVal;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Mode = %d\n", mode(a,n));
    return 0;
}
