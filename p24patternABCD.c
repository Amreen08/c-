#include<stdio.h>

int main()
{   
    int n=1;
    char i;
    while(n<4)
    {
      for(i='A';i<='D';i++)
      {
        printf("%c ",i);   
      }
     printf("\n");
     n++;
    }
    return 0;
}