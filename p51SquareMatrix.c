//print matrix n find out if it is square matrix or not
#include<stdio.h>

int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter array elements\n");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
    printf("Array is\n");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      printf("%d\t",a[i][j]);
     }
     printf("\n");
    }
    if(r==c)
    {
     printf("\nit is square matrix");
    }
    else
    {
     printf("\nit is not square matrix");
    }
    return 0;
}