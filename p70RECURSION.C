/*recursion:when function call itself*/
//tower of hanoi

#include<stdio.h>
//#include<conio.h>

int sum(unsigned long int n);
int fact(unsigned long int n);
int fabo(int n);

int sum(unsigned long int n)
{
 if(n!=0)
 {
   return n+sum(n-1);
 }
 else
 {
    return n;
 }
}

int fact(unsigned long int n)
{
 if(n==0||n==1)
 {
   return n;
 }
 else
 {
   return n*fact(n-1);
 }
}

int fabo(int n)
{ 
 if((n==0)||(n==1))
 {
   return n;
 }
 else 
 {
   return (fabo(n-1)+fabo(n-2));
 }
}

int main()
{
  unsigned long int a,r,c;

  //system("cls");
  printf("\nEnter what you want to do?\n1.sum of numbers\n2.factorial:\n3.fabonacci: ");
  scanf("%ld",&c);
  if(c==1)
  {
   printf("\nEnter number upto which you want sum: ");
   scanf("%ld",&a);
   r=sum(a);
   printf("sum is %u\n",r);
  }
  else if(c==2)
  {
    printf("\nEnter number for factorial: ");
    scanf("%ld",&a);
    r=fact(a);
    printf("factorial is %u\n",r);
  }
  else if(c==3)
  {
    int n,c,i;
    printf("\nEnter number upto you want fabonacci: ");
    scanf("%d",&n);
    printf("fabonacci series: ");
    for(i=0;i<=n;i++)
    {
       printf("%d ",fabo(i)); 
    }
    printf("\n\n");
  }
  return 0;
}
