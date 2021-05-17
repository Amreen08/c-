#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[10],str2[10];
    printf("Enter first string ");
    gets(str1);
    printf("Enter second string ");
    gets(str2);
    
    if(strcmp(str1,str2)==0)
    printf("String are equal");
    else
    printf("\nString are not equal");
    return 0;
}