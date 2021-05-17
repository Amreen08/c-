#include<stdio.h>

int main()
{
    int r,c,a[10][10],i,j;
    printf("enter row n column of array");
    scanf("%d%d",&r,&c);
    printf("enter array elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
    }
    printf("array is\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
         printf(" %d ",a[i][j]);
      }
       printf("\n");
    }
    printf("\ntranspose is\n");
     for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
         printf(" %d ",a[j][i]);
      }
       printf("\n");
    }
    return 0;
}