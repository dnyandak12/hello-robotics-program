#include <stdio.h>

void transpose(int A[][10], int T[][10], int r, int c){
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) T[j][i]=A[i][j];
}
int main(){
    int r,c; scanf("%d%d",&r,&c);
    int A[10][10],T[10][10];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    transpose(A,T,r,c);
    for(int i=0;i<c;i++){ for(int j=0;j<r;j++) printf("%d ",T[i][j]); printf("\n"); }
    return 0;
}
