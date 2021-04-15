#include<stdio.h>
void main()
{
 char ch;
 clrscr();
 printf("enter any alphabet");
 ch=getch();
 if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 {
  printf("%c is a vowel",ch);
 }
 else
 {
  printf("%c is not a vowel",ch);
 }
 getch();
}