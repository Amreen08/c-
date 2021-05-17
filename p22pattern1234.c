#include<stdio.h>

int main()
{   
     int i,n=1;
    
     for(i=1;i<=16;i++)
     {
       printf("%d ",i);
       if(i%4==0)
       printf("\n");
     }
    
    return 0;
}