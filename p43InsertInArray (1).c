#include<stdio.h>

int main()
{
    int a[10],n,i,p,s;
    printf("Enter size of array:");
    scanf("%d",&s);
  
   if(s==9)
   { 
       printf("Array is full");
   }
   else
   {
      printf("Enter array elements\n");  
      for(i=0;i<s;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("Enter element to insert\n");
     scanf("%d",&n);
     printf("Enter position \n");
     scanf("%d",&p);
     for(i=s-1;i>=p-1;i--)
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