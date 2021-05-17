#include<stdio.h>

int main()
{   
    int n=1;
    char i;
    char ch='A';
    int j;
    printf("\nfirst method\n");
    while(n<4)
    {
      for(i='A';i<='D';i++)
      {
        printf("%c ",i);   
      }
     printf("\n");
     n++;
    }
    printf("\nsecond method\n");
    for(j=1;j<=16;j++)
    {
     printf("%c ",ch++);
     if(j%4==0)
     {
      ch='A';
     }
     if(j%4==0)
     {
      printf("\n");
     }
    }
    return 0;
}