#include<stdio.h>

int main()
{    
    unsigned int a=(-5);
    int i;
    char ch;
    float f;
    double d;
  //  byte b;
    long l;
    short s;
    printf("negative number is %u",a);
    printf("\nnegative number is %d",a);
    printf("\nsize of unsigned integer %d",sizeof(a));
    printf("\nsize of integer %d",sizeof(i));
    printf("\nsize of character %d",sizeof(ch));
    printf("\nsize of float %d",sizeof(f));
    printf("\nsize of double %d",sizeof(d));
    printf("\nsize of long %d",sizeof(l));
    printf("\nsize of short %d",sizeof(s));
     return 0;
}