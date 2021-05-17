#include<stdio.h>

int main()
{
    int n=10,p=10;
    printf("while loop\n");
    while(n!=0)
    {
     printf("step");
     printf("%d\n",n);
     n--;
    }
    
    printf("do while loop\n");
    do
    {
     printf("step");
     printf("%d\n",p);
     p--;
    }while(p>0);
    
    return 0;
}