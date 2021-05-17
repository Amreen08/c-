#include<stdio.h>

int main()
{
     int i,j,p,q;
     char ch='A';
     char c='A';
     printf("first method\n");
     for(i=1;i<=4;i++)
     {
       for(j=1;j<=4;j++)
       {
       printf("%c",ch++);
       }
      printf("\n");
     }
    
     printf("second method\n");
     p=1;
     while(p<=4)
     {
       q=1;
       while(q<=4)
       {
         printf("%c",c++);
         q++;
       }
        printf("\n");
        ++p;
     }
    return 0;
}