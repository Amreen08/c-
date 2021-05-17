//binary search
#include<stdio.h>

int main()
{
    int a[10],n,i,val;
  
    printf("Enter size: ");
    scanf("%d",&n);
    
    printf("Enter sorted array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    printf("Enter value to search:");
    scanf("%d",&val);
    
    int low=a[0],high=a[(n-1)],mid;
    
    while(low<=high)
    {
      mid=(low+high)/2;
      if(a[mid]==val)
      {
        printf("number found at %d",mid+1);
        break;
      }
      else if(a[mid]<val)    //right side part
      {
        low=mid+1;
      }
      else if(a[mid]>val)    //left side part
      {
        high=mid-1;
      }  
    }
    if(low>high)
    {
      printf(" No not in the list\n");
    }
    return 0;
}