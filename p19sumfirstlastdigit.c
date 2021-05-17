//sum of 1st n last digit
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,t1,t2,s=0;
    printf("Enter no : ");
    scanf("%d",&n);
    t2=n%10;
    while(n>=10)
    {
     n=n/10;
    }
    
    t1=n;
    s=t1+t2;
    printf("sum of 1st and last digit= %d",s);
    getch();
    return 0;
}