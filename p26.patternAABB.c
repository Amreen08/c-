#include<stdio.h>

int main()
{
    int i;
    char ch='A';
    
    for(i=1;i<=16;i++)
    {
     printf("%c ",ch);
     if(i%2==0)
     {
      ch++;
     if(i%4==0)  
     { 
      printf("\n");
     }  
     }
    }
    return 0;
}