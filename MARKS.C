  #include<stdio.h>
  int main()
  {
   int m;
   printf("Enter marks");
   scanf("%d",&m);

   if(m>=95 && m<=100)
   {
    printf("your grade is A+");
   }
   else if(m>=90 && m<=99)
   {
    printf("your grade is A");
   }
   else if(m>=80 && m<=89)
   {
    printf("your grade is B");
   }
   else if(m>=70 && m<=79)
   {
    printf("your grade is C");
   }
   else if(m>=60 && m<=69)
   {
    printf("your grade is D");
   }
   else
   {
    printf("you are fail");
   }
   getch();
   return 0;
 }
