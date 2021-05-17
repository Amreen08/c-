#include<stdio.h>
#include<conio.h>
int main()
{
    char ch=' ';
    printf("Enter any char to print $ to exit\n");
    while(ch!='$')
    {
       // ch=getch();
       scanf("%c",&ch);
       printf("%c",ch);
       //putch(ch);
    }
    return 0;
}