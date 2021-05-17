#include<stdio.h>

int main()
{
    int n,s=0,r;
    printf("Enter number ");
    scanf("%d",&n);
    while(n>0)
    {
     r=n%10;
     s=s+r;
     n=n/10;
    }
     printf("sum is %d",s);
    return 0;
}