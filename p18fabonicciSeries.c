//fabonicci series 0 1 1 2 3 5 ...
#include<stdio.h>

int main()
{
    int i,a=0,b=1,c,n;
    printf("Enter terms upto you want to print fabonicci :");
    scanf("%d",&n);
    printf(" %d  %d ",a,b);
    for(i=0;i<=n-3;i++)
    {
      c=a+b;
      printf(" %d ",c);
      a=b;
      b=c;
    }
    return 0;
}