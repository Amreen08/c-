#include<stdio.h>

int main()
{
    char ch[10];
    int i;
    printf("Enter string ");
    for(i=0;i<10;i++)
    {
     scanf("%c",&ch[i]);
    }
    printf("String is ");
    for(i=0;i<10;i++)
    {
     printf("%c",ch[i]);
    }
    return 0;
}