//pre and post increment
#include<stdio.h>

int main()
{
    int i=10,j=15,k=0;
    int a=10,b=15,c=0;
    int p=10,q=15;
    int r=0,s=10,t=15,u=20;
    
     k=i++ + j;              //10+15=25
     printf("i=%d",i);      //11
     printf("\nj=%d",j);    //15
     printf("\ns=%d\n",k);  //25
    
     c= ++a + b;            //11+15=26
     printf("\na=%d",a);    //11
     printf("\nb=%d",b);    //15
     printf("\nc=%d\n",c);  //26
    
     p++;                   //11
     printf("\np=%d\n",p);  
     ++q;                   //16
     printf("\nq=%d\n",q); 
    
     r=s++ + t + ++u + s;   //57
     printf("\nr=%d\n",r); 
     return 0;
}