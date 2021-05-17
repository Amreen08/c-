#include<stdio.h>

int main()
{
    int a[10][10],i,j;
    printf("Enter matrix Elements\n");
    for(i=0;i<3;i++)
    {
      printf("row %d\n",i);
      for(j=0;j<3;j++)
      {
        scanf("%d",&a[i][j]);
      }  
    }
    printf("matrix Elements\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d\t",a[i][j]);
      }
        printf("\n");
    }
    
     printf("diagonal Elements\n");
   
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        if(i==j)
        { printf("%d\t",a[i][j]);}
      }
        printf("-\n");
    }
    
    
    return 0;
}