#include<stdio.h>

int main()
{
    char pwd[5];
    clrscr();
    printf("Enter Password");
    for(i=0;i<5;i++)
    {
     pwd[i]=getch();
    }
    printf("\nPassword is %s",pwd);
    return 0;
}