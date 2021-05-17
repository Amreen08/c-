//Linear search
#include<stdio.h>

int main()
{
    int a[10],i,n,f=0,p;
    printf("Enter array elements:\n ");
    for(i=0;i<8;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Array is:\n");
    for(i=0;i<8;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\nEnter number to search: ");
    scanf("%d",&n);
     for(i=0;i<8;i++)
    {
     if(a[i]==n)
     {
      f++;
      p=i;
     }
    }
     if(f==1)
     {
      printf("number is found at position %d",p+1);
     }
     else
     {
      printf("number not found");
     }
    
    
    return 0;
}