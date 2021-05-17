//Linear search
#include<stdio.h>

int main()
{
    int a[10],i,n,f=0,p;
    printf("Enter array elements:\n");
    for(i=0;i<8;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Array is:\n");
    for(i=0;i<8;i++)
    {
     printf("%d ",a[i]);
    }
    printf("\nEnter number to search & delete: ");
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
      printf("number is found at position %d\n",p+1);
     }
     else
     {
      printf("number not found\n");
     }
     for(i=p;i<8;i++)
     {
       a[i]=a[i+1];
     }
     printf("Array after deleting element:\n");
     for(i=0;i<7;i++)
     {
      printf("%d ",a[i]);
     }
    return 0;
}