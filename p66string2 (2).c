//use of getch()
#include<stdio.h>
#include<conio.h>

int main()
{
    char pwd[5];
    int i;
    printf("Enter Password");
    for(i=0;i<5;i++)
    {
     pwd[i]=getch();
     printf("*");
    }
    printf("\nPassword is %s",pwd);
    return 0;
}