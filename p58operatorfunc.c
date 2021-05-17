#include<stdio.h>

void msg()
{
 printf("hello");
}
//int add(int m,int n );

int add(int m,int n )
{
  int z=m+n;
  return z;
}

int main()
{
    int OP1=(0 && 1 && 0 || 0 || 1);
    int OP2=(0 && 1 && 1|| 0  || ! 1);
    printf( "a=%d, b=%d, %s",OP1,OP2,"hello");
    
    int AND= 12 & 5;  // 1100 & 0101 
    printf("\n\nAnd c=%d ",AND);
    
    int OR= 12 | 5;  // 1100 & 0101 
    printf("\n\nOR d=%d ",OR);
    
    //bitwise XOR
    int xor= 12^5;
    printf("\n\nxor=%d ",xor);
    
    int rightshift=12>>5;  //12*2⁵
    printf("\n\nright shift=%d",rightshift);
   
    int leftshift=12<<5;
    printf("\n\nleft shift=%d",leftshift);
    
    int compliment= ~4;
    printf("\n\ncompliment of 4 %d", compliment);
  
    int twocompliment= ~(~4);
    printf("\n\ntwocompliment of 4 %d\n", twocompliment);
  
   //printing binary
     int binary=4;
     printf("\nbinary of 4 is %x\n",binary);
    
     printf("\nfunction\n\n");
     msg();
     printf("\n"); 
    
     int sum=add(5,6);
     printf("\nsum=%d\n\n",sum);
    
     msg();
     printf("\n\n");
  
   //ternary operator
   int f=0,t,t1, t3=0,a=10, b=15, c=20, d=30,e=40;

          f = (a > b) ?
          (a > c ? a : b) :
          (b > c ? b : c);
        printf("Greater no is: %d\n", f);
        
         t = (a > b && a > c && a > d) ?
               a : ((b > c && b > d) ?
               b : (c > d ? c : d));
               printf("\nGreater no is: %d\n", t);
     
    t1=(a>b)?printf("\na is Greater no : %d\n", t1):printf("\nb is Greater no : %d\n", t1);
    
    t3=(a>b)?printf("\na is Greater no : %d\n", a):printf("\nb is Greater no : %d\n", b);
    printf(" \nGreater no is  : %d\n", t3);
    
    return 0;
}