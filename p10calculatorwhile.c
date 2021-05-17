#include<stdio.h>

int main()
{
    int ch,a,b;
   
   do
   {
     printf("\n1.Add\n");
     printf("2.sub\n");
     printf("3.mul\n");
     printf("4.divi\n");
     printf("0.Exit\n");
     printf("enter your choice\n");
     scanf("%d",&ch);
     if(ch>=1 && ch<=4)
     {
      printf("enter two numbers");
      scanf("%d %d",&a,&b);
     }
     
     switch(ch)
     {
      case 1: printf("you chose Add\nsum is %d",a+b);
      break;
      case 2: printf("you chose subtraction\nsubtraction is %d",a-b);
      break;
      case 3: printf("you chose multiplication\nmultiplication is %d",a*b);
      break;
      case 4: printf("you chose division\ndivision is %d",a/b);
      break;
      case 0: break;
      default: printf("Invalid choice");
     }
    
    }while(ch!=0);
    return 0;
}