#include <stdio.h>
#include <stdlib.h>

void sieve(int n, int isPrime[]){
    for(int i=0;i<=n;i++) isPrime[i]=1;
    isPrime[0]=isPrime[1]=0;
    for(int p=2;p*p<=n;p++) if(isPrime[p])
        for(int q=p*p;q<=n;q+=p) isPrime[q]=0;
}
int main(){
    int n; scanf("%d",&n);
    int *isPrime = malloc((n+1)*sizeof(int));
    sieve(n,isPrime);
    for(int i=2;i<=n;i++) if(isPrime[i]) printf("%d ",i);
    printf("\n");
    free(isPrime);
    return 0;
}
