#include<stdio.h>
void main() 
{
  int m; printf("Enter marks: "); scanf("%d",&m);
    if(m>=90) printf("Grade A\n");
    else if(m>=75) printf("Grade B\n");
    else if(m>=50) printf("Grade C\n");
    else printf("Grade D\n");
}
