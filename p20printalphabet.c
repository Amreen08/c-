#include<stdio.h>

int main()
{
    char i;
    printf("alphabets are\n");
    for(i='A';i<='Z';i++)
    {
     printf(" %c ",i);
    }
    printf("\nACII values are\n");
     for(i='A';i<='Z';i++)
    {
     printf("%d ",i);
    }
   
    return 0;
}