#include<stdio.h>
void main() 
{
  int n,i,j,count,visited[100]={0};
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(visited[i]) continue;
        count=1;
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) { count++; visited[j]=1; }
        }
        printf("%d occurs %d times\n",a[i],count);
    }
}
