#include<stdio.h>

int main()
{
    int n,i,rev=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
      if(r==0)
      { 
          printf("%d",r);   
      }
    }
    printf("%d\n",rev);
    
    return 0;
}