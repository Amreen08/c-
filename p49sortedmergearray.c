//merging of two array
#include<stdio.h>

int main()
{
    int a[10],b[10],c[20],i,j,k,s1,s2;
    printf("Enter size of array1 ");
    scanf("%d",&s1);
    printf("Enter size of array2 ");
    scanf("%d",&s2);
    printf("Enter sorted array1 elements\n");
    for(i=0;i<s1;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Enter sorted array2 elements\n");
    for(i=0;i<s2;i++)
    {
     scanf("%d",&b[i]);
    }
    //merging
    for(i=0,j=0,k=0;i<s1 && j<s2;k++)
    {
      if(a[i]<=b[j])
      {
        c[k]=a[i];
        i++; 
      }
      else
      {
        c[k]=b[j];
        j++;
      }
     if(i<s1)
     {
       while(i<s1)
       {
          c[k++]=a[i++];
       }
     }
     if(j<s2)
     {
        while(j<s2)
       {
          c[k++]=a[j++];
       }
     }
    }

    printf("\nmerged array c is \n");
    for(i=0;i<(s1+s2);i++)
    {
     printf("%d ",c[i]);
    }
    
    return 0;
}