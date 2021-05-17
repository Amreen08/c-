//insert element in sorted array so that it will be sorted after that also
#include<stdio.h>

int main()
{
    int a[10],n,i,p,s;
    printf("Enter size of array:");
    scanf("%d",&s);
  
   if(s>=9)
   { 
       printf("Array is full");
   }
   else
   {
     printf("Enter sorted array elements\n");  
     for(i=0;i<s;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("Enter element to insert\n");
     scanf("%d",&n);
      
     for(i=0;i<s;i++)       //to find position to insert
     {
        if(a[i]<n && a[i+1]>=n)
        { 
           p=i+2; 
        }
     }
 
     for(i=s-1;i>=p-1;i--) //inserting element
     {
       a[i+1]=a[i];   
     }
     a[p-1]=n;
   
     printf("Elements are\n");
     for(i=0;i<=s;i++)
     {
      printf("%d\n",a[i]);
     }
   }
    return 0;
}