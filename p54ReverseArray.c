//Reverse an array
#include<stdio.h>

int main()
{
    int a[10],i,j,n,t;
    printf("Enter size");
    scanf("%d",&n);
    
    printf("Enter Array:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
      t=a[j];
      a[j]=a[i];
      a[i]=t;
    }
    
    printf(" Array is :\n");
    for(i=0;i<n;i++)
    {
     printf("%d  ",a[i]);
    }
    return 0;
}