#include <stdio.h>

void rowSum(int A[][10], int r, int c, int out[]){
    for(int i=0;i<r;i++){ out[i]=0; for(int j=0;j<c;j++) out[i]+=A[i][j]; }
}
int main(){
    int r,c; scanf("%d%d",&r,&c);
    int A[10][10], out[10];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    rowSum(A,r,c,out);
    for(int i=0;i<r;i++) printf("%d\n", out[i]);
    return 0;
}
