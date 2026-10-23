#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i;
    printf("enter value of 1st array elements  :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter value of 2nd array elements  :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("swap elements are :");
    for(i=0;i<10;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
        printf("\na[%d] %d",i,a[i]);
     printf("\nb[%d] %d",i,b[i]);
        
    }
    

}