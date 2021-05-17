//max no in an array
#include<stdio.h>

int main()
{
   int a[7],i,max;
    a[0]=2;    //initializing an array
    a[1]=3;
    a[2]=5;
    a[3]=4;
    a[4]=5;
    a[5]=9;
    a[6]=12;
    
   max=a[0];
   for(i=0;i<7;i++)
   {
     if(a[i]>max)
     {
       max=a[i];
     }
   }
   printf("max no is %d ",max);
   return 0;
}