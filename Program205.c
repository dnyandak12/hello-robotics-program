#include <stdio.h>

void colSum(int A[][10], int r, int c, int out[]){
    for(int j=0;j<c;j++){ out[j]=0; for(int i=0;i<r;i++) out[j]+=A[i][j]; }
}
int main(){
    int r,c; scanf("%d%d",&r,&c);
    int A[10][10], out[10];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    colSum(A,r,c,out);
    for(int j=0;j<c;j++) printf("%d ", out[j]);
    printf("\n");
    return 0;
}
