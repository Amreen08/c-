/*structure and union 
example-
1.book: author,title,price,year.
2.date: day,month,year.
3.time: seconds,minutes,hours.
*/
#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
}s1;
int main()
{
    printf("\nEnter Roll no and Name of 1st student");
    scanf("%d%s",&s1.roll_no,&s1.name);
    printf("Roll no= %d Name= %s\n",s1.roll_no,s1.name);

    printf("total size is=%ld\n",sizeof(struct student));  //printing size
    printf("size is=%ld\n",sizeof(s1.roll_no));
    printf("size is=%ld\n",sizeof(s1.name));
   return 0;
}