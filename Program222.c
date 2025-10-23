#include <stdio.h>

int countOcc(int a[], int n, int key){
    int c=0; for(int i=0;i<n;i++) if(a[i]==key) c++;
    return c;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int key; scanf("%d",&key);
    printf("Count = %d\n", countOcc(a,n,key));
    return 0;
}
