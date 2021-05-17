#include<stdio.h>

int main()
{
    char i,j;
    for(i=0;i<4;i++)
    {
      for(j='A';j<='D';j++)
      {
       printf("%c ",j);
      }
     printf("\n");
    }
    return 0;
}