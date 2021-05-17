//use of gets and puts

#include<stdio.h>
#include<conio.h>

int main()
{
    char str1[20],str2[20];
    
    printf("\nEnter name ");
    gets(str2);
    puts(str2);
    
    printf("Enter name ");
    scanf("%s",&str1);
    printf("welcome %s",str1);
    
  
    return 0;  
}