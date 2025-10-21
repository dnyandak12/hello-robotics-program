#include <stdio.h>

void readArray(int a[], int n){
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d",&a[i]);
    }
}
void printArray(int a[], int n){
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
}
int main(){
    int n;
    printf("n: "); scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printArray(a,n);
    return 0;
}
