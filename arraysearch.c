#include <stdio.h>
void main()
{
    int a[50],b[50],n,m,i,temp,x,pos=0,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element:");
    scanf("%d",&x);
   for(i=0;i<n;i++)
   {
       if(a[i]==x)
       {
           flag=1;
           pos=i+1;
           break;
       }
   }
   if(flag==1)
   printf("Element found at position%d",pos);
   else
   printf("Element not found");
   
   
}
