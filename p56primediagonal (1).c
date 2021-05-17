#include<stdio.h>

int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter row and column:");
    scanf("%d%d",&r,&c);
    
    printf("Enter matrix Elements\n");
    for(i=0;i<r;i++)
    {
      printf("row %d\n",i);
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }  
    }
    
    printf("matrix Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",a[i][j]);
      }
        printf("\n");
    }
    
    printf("diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(i==j)
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
     printf("upper diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(i<j)
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
    
     printf("lower diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if(i>j)
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
    
     printf("secondary diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if((i+j)==(r-1))
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
    
       printf("upper secondary diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if((i+j)<(r-1))
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
    
       printf("lower secondary diagonal Elements\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        if((i+j)>(r-1))
        { 
          printf("%d\t",a[i][j]);
        }
        else
        {
          printf("-\t");
        }
      }
        printf("\n");
    }
    
    return 0;
}