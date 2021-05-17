//Replace next element in array
#include<stdio.h>

int main()
{
    int a[10],i,j,s,t=0;
    printf("Enter size\n");
    scanf("%d",&s);
    
    printf("Enter elements\n");
    for(i=0;i<s;i++)
    {
      scanf("%d",&a[i]);
    }
    
    printf("Array is\n");
    if(s%2==0)
    {
     for(i=0;i<s;i++)
     {
      t=a[i+1];
      a[i+1]=a[i];
      a[i]=t;
      i++;
      }
    }
    else
    {
      for(i=0;i<s-1;i++)
     {
      t=a[i+1];
      a[i+1]=a[i];
      a[i]=t;
      i++;
      }
    }
    for(i=0;i<s;i++)
    {
     printf("%d ",a[i]);
     
    }
    return 0;
}