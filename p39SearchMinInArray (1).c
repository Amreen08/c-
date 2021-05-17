//search min no in areay
#include<stdio.h>

int main()
{
    int a[10],i,min;
    printf("Enter 10 elements");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
      if(a[i]<min)
      {
       min=a[i];
      }
    }
    printf("min no is %d",min);
    return 0;
}