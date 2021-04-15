#include<stdio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter anything");
 scanf("%c",&ch);
 if(ch>='0'&& ch<='9')
 {
  printf("it is number");
 }
 else if((ch>='A' && ch<='Z')||(ch>='a'&& ch<='z'))
 {
  printf("it is alphabet");
 }
 else
 {
  printf("special character");
 }
 getch();
 return 0;
}