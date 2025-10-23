#include <stdio.h>
#include <math.h>

int isPrime(int x){
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
    return 1;
}
int countPrimes(int a[], int n){
    int c=0; for(int i=0;i<n;i++) if(isPrime(a[i])) c++;
    return c;
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Primes = %d\n", countPrimes(a,n));
    return 0;
}
