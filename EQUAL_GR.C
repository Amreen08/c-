#include<stdio.h>
int main()
{
 int a,b,c;
 clrscr();
 printf("enter three number");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 {
  printf("a is greater");
 }
 else if(b>a && b>c)
 {
   printf("b is greater");
 }
 else if(c>a && c>b)
 {
  printf("c is greater");
 }
 else if(a==b && a!=c)
 {
  printf("a & b are equal");
 }
 else if(b==c && b!=a)
 {
  printf("b and c are equal");
 }
 else if(a==c && a!=b)
 {
  printf("a and c are equal");
 }
 else if(a==b && b==c)
 {
  printf("all are equal");
 }

 getch();
 return 0;
}