#include<stdio.h>

int main()
{   
    int n,s=0,i;
    printf("Enter number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      s=s+i;
    }
    printf("sum of %d numbers = %d",n,s);
    return 0;
}