#include<stdio.h>
int main()
{
 double sal;
 char grade;
 clrscr();
 printf("enter your salary ");
 scanf("%lf", &sal);
 if(sal<=35000)
 {
  printf("enter your grade ");
  scanf(" %c", &grade);

  if(grade=='A'|| grade=='a')
  {
   sal+=sal*(0.2);
   printf("%d",sal);
  }
  else if(grade=='B'|| grade=='b')
  {
   sal=sal+sal*(0.15);
   printf("%d",sal);
  }
  else if(grade=='C'|| grade=='c')
  {
   sal=sal+sal*(0.1);
   printf("%d",sal);
  }
  else if(grade=='D'||grade=='d')
  {
   sal=sal+sal*(0.05);
   printf("%d",sal);
  }
  else
  {
   printf("invalid grade");
  }
 }
 else
 {
   printf("your salary can't be raise");
 }
 getch();
 return 0;
}