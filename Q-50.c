#include<stdio.h>
int main()
{
    int a[10],i,temp;
    printf("enter elements  :");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
    }
    for(int j=0;j<9;j++)
    {
        for(i=0;i<10;i++)
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("after sorting");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}