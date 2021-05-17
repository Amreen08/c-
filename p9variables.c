#include<stdio.h>

void fun()
{
 int a=10;    //local
 extern int b=20;   //global
 static int c=30;
 auto int d=40;
}

int main()
{
    printf("value of a = %d ",a);
    return 0;
}