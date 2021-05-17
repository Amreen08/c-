#include<stdio.h>

void fun()
{
 int a=10;    //local
 printf("value of a = %d ",a);
 /*extern int b=20;   //global memory nai milti,only 
                      //declaration is there
 printf("value of b = %d ",b);*/
 static int c;
 printf("\nvalue of c = %d ",c);
 auto int d=30;
 printf("\nvalue of d = %d ",d);
}

int main()
{
    fun();
    return 0;
}