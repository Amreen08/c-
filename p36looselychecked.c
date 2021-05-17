#include<stdio.h>

int main()
{
   int i;
   int a[5];  //loosely checked language
   
   printf("Enter 8 Elememts");
   for(i=0;i<8;i++)
   scanf(" %d",&a[i]);
   
   for(i=0;i<8;i++)
   printf(" %d",a[i]);
   return 0;
}