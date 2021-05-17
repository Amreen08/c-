//calculate length of the string
#include<stdio.h>

int main()
{   
    char ch[50];
    int i;
  
    printf("Enter any string ");
    scanf("%s",&ch);
  
     for(i=0;ch[i]!='\0';i++);
     printf("length is %d",i);
    
      return 0;
}