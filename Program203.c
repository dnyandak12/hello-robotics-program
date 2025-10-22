#include <stdio.h>

int trace(int A[][10], int n){
    int s=0;
    for(int i=0;i<n;i++) s += A[i][i];
    return s;
}
int main(){
    int n; scanf("%d",&n);
    int A[10][10];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
    printf("Trace = %d\n", trace(A,n));
    return 0;
}
