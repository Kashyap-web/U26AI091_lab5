#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i;
    printf("enter  1st array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter  2nd array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("elements of 3rd array");
    for(i=0;i<10;i++)
    {
         c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
   
    
}