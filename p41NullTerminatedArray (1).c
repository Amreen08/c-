#include<stdio.h>

int main()
{
    char ch[25];
    ch[0]='H';
    ch[1]='E';
    ch[2]='L';
    ch[3]='L';
    ch[4]='O';
    ch[5]='\0';
    
    printf(ch);
    printf("\a"); //to give beep
    return 0;
}