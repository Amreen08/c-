#include<stdio.h>

int main()
{
    int a[10][10],i,j,r,c,val;
    printf("Enter row n colum of matrix1");
    scanf("%d%d",&r1,&c1);
    
    printf("Enter row n colum of matrix2");
    scanf("%d%d",&r2,&c2);
    
    printf("Enter matrix1 elements");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
      {
       scanf("%d",&a[i][j]);
      }
    }
    printf("Enter matrix2 elements");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
      {
       scanf("%d",&b[i][j]);
      }
    }
    printf("what do u want to do\n1.add\2.subtract\3.multiply\n");
    scanf("%d",&val)
    if(val==1)
    { 
      if((r1==r2)&&(c1==c2))
      {
        printf("matrix can be added");
      }
      else
      {
        printf("matrix can't be added");
      }
    }
    else if(val==2)
    { 
      if((r1==r2)&&(c1==c2))
      {
        printf("matrix can be subtracted");
      }
      else
      {
        printf("matrix can't be subtracted");
      }
    }
     else if(val==3)
    { 
      if(r2==c1)
      {
        printf("matrix can be multiply");
      }
      else
      {
        printf("matrix can't be multiply");
      }
    }
    return 0;
}