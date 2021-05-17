#include<stdio.h>

void fun()
{
 static int a=0;
 a++;
 printf("a=%d\n",a);

}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}