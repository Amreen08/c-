#include<stdio.h>

int main()
{
    int i;
    char ch='A';
    
    for(i=1;i<=16;i++)
    {
     printf("%c ",ch);
     if(i%4==0)
     {
      ch++;
      printf("\n");
     }
    }
    return 0;
}