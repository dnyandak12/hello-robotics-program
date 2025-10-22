#include <stdio.h>

void multiplyMatrix(int A[][10], int B[][10], int C[][10], int r1,int c1,int c2){
    for(int i=0;i<r1;i++) for(int j=0;j<c2;j++){
        C[i][j]=0;
        for(int k=0;k<c1;k++) C[i][j]+=A[i][k]*B[k][j];
    }
}
int main(){
    int r1,c1,r2,c2; scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1!=r2){ printf("Incompatible\n"); return 0; }
    int A[10][10],B[10][10],C[10][10];
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&A[i][j]);
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&B[i][j]);
    multiplyMatrix(A,B,C,r1,c1,c2);
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ",C[i][j]); printf("\n"); }
    return 0;
}
