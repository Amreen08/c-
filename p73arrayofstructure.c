/*structure and union example*/

#include<stdio.h>
struct student
{
    int roll_no;
    char name[10];
}s1[5];

int main()
{   
    int i;
   //initializing
    for(i=0;i<5;i++)
    {
        printf("Enter roll no and name of %d student: ",i+1);  
        scanf("%d%s",&s1[i].roll_no,&s1[i].name);
    }
    //printing
    for(i=0;i<5;i++)
    {
         printf("roll no= %d name= %s\n",s1[i].roll_no,s1[i].name);
    }
    printf("size is %ld\n",sizeof(struct student));  //printing size
    
   return 0;
}