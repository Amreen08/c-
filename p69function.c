//calculator using functions
#include <stdio.h>
//#include <conio.h>

void sum();               //prototype
void mul(int a,int b);
int sub();
int divi(int x,int y);

void sum()
{
 int a,b,sum=0;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum is %d\n",sum);
}
void mul(int a,int b)
{
  int mul;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);
  mul=a*b;
  printf("multiplication is %d\n",mul);
}
int sub()
{
  int p,q,r;
  printf("enter two numbers");
  scanf("%d%d",&p,&q);
  r=p-q;
  return r;
}
int divi(int x,int y)
{
   int z;
   printf("enter two numbers");
   scanf("%d%d",&x,&y);
   z=x/y;
   return z;
}

void main()
{
    int m,n,o,p,q;
     //clrscr();
     printf("what do you want to do?\n1.add\n2.multiply\n3.subtract\n4.division\n");
     scanf("%d",&m);

     if(m==1)
     { sum();
     }
     else if(m==2)
     {	mul(p,q);
      }
     else if(m==3)
     {
	    o=sub();
	    printf("subtraction is %d\n",o);
     }
     else if(m==4)
     {
	     n=divi(p,q);
	     printf("division is %d\n",n);
     }
     else
     {
	     printf("invalid value\n");
     }
    // getch();
}