#include <stdio.h>

void addMatrix(int A[][10], int B[][10], int C[][10], int r, int c){
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) C[i][j]=A[i][j]+B[i][j];
}
int main(){
    int r,c; scanf("%d%d",&r,&c);
    int A[10][10], B[10][10], C[10][10];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&B[i][j]);
    addMatrix(A,B,C,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
