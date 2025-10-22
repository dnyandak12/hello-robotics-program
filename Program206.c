#include <stdio.h>

int isSymmetric(int A[][10], int n){
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(A[i][j]!=A[j][i]) return 0;
    return 1;
}
int main(){
    int n; scanf("%d",&n);
    int A[10][10];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
    printf(isSymmetric(A,n)?"Symmetric\n":"Not symmetric\n");
    return 0;
}
