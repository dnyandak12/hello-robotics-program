#include <stdio.h>

int majorityElement(int a[], int n){
    int cand=a[0], count=1;
    for(int i=1;i<n;i++){
        if(a[i]==cand) count++;
        else{
            count--;
            if(count==0){ cand=a[i]; count=1; }
        }
    }
    // optional verify could be added
    return cand;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Majority candidate = %d\n", majorityElement(a,n));
    return 0;
}
