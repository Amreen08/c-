#include<stdio.h>

int main()
{
    int a[10][10],i,j,r1,c1,r2,c2,val,b[10][10],t[10][10],k;
    printf("Enter row n colum of matrix1: ");
    scanf("%d%d",&r1,&c1);
    
    printf("Enter row n colum of matrix2: ");
    scanf("%d%d",&r2,&c2);
    
    printf("Enter matrix1 elements\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
      {
       scanf("%d",&a[i][j]);
      }
    }
    printf("Enter matrix2 elements\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
      {
       scanf("%d",&b[i][j]);
      }
    }
    printf("matrix1 elements\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
      {
       printf("%d\t",a[i][j]);
      }
     printf("\n");
    }
    printf("matrix2 elements\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
      {
       printf("%d\t",b[i][j]);
      }
     printf("\n");
    }
    
    printf("what do u want to do\n 1.add\n 2.subtract\n 3.multiply\n");
    scanf("%d",&val);
    if(val==1)
    { 
      if((r1==r2)&&(c1==c2))
      {
        printf("matrix can be added\n");
          for(i=0;i<r2;i++)
          {
            for(j=0;j<c2;j++)
           {
               t[i][j]=a[i][j]+b[i][j];    
            }
          }
        
           for(i=0;i<r2;i++)
           {
            for(j=0;j<c2;j++)
           {
               printf("%d\t",t[i][j]);    
            }
            printf("\n");
          }
          
      }
      else
      {
        printf("matrix can't be added\n");
      }
    }
    else if(val==2)
    { 
      if((r1==r2)&&(c1==c2))
      {
        printf("matrix can be subtracted\n");
          for(i=0;i<r2;i++)
          {
            for(j=0;j<c2;j++)
           {
               t[i][j]=a[i][j]-b[i][j];    
            }
          }
        
           for(i=0;i<r2;i++)
           {
            for(j=0;j<c2;j++)
           {
               printf("%d\t",t[i][j]);    
            }
            printf("\n");
          }
       }
      else
      {
        printf("matrix can't be subtracted\n");
      
     }
    }
     else if(val==3)
     { 
      if(r2==c1)
      {
        printf("matrix can be multiply\n");
          for(i=0;i<r2;i++)
          {
            for(j=0;j<c2;j++)
            {
             t[i][j]=0;
             for(k=0;k<c1;k++)
              {
               t[i][j]=t[i][j]+a[i][k]*b[k][j];    
         
              }
            }
          }
        
           for(i=0;i<r2;i++)
           {
            for(j=0;j<c2;j++)
           {
               printf("%d\t",t[i][j]);    
            }
            printf("\n");
          }
      }
      else
      {
        printf("matrix can't be multiply\n");
      }
    }
    return 0;
}