/*dynamic programming: malloc(),calloc(),realloc(),free()*/
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int n,i;
    printf("Enter Size: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\n%d",a);   //printing address

    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
     //free(a);
     //a[0]=6;

    int *b=(int *)realloc(a,2*n*sizeof(int));
    printf("Previous block address=%d,new add=%d\n",a,b);

    for(i=0;i<2*n;i++)
    {
        printf(" %d ",b[i]);  //printing element
    }

}