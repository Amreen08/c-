//merging of two array
#include<stdio.h>

int main()
{
    int a[10],b[10],c[20],i,j,k;
    printf("Enter array1 elements\n");
    for(i=0;i<8;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Enter array2 elements\n");
    for(i=0;i<8;i++)
    {
     scanf("%d",&b[i]);
    }
    //merging
    // copy from a to c
    for(i=0,j=0;i<8;i++,j++)
    {
      c[j]=a[i];
    }
    printf("array c is \n");
    for(i=0;i<8;i++)
    {
     printf("%d ",c[i]);
    }
    
    //copy from b to c
    for(k=0;k<8;k++,j++)
    {
      c[j]=b[k];
    }
    printf("\nmerged array c is \n");
    for(i=0;i<16;i++)
    {
     printf("%d ",c[i]);
    }
    
    return 0;
}