#include<stdio.h>
int main()
{
    int a[10],i;
    int m=0,n=0,p=0;
    printf("enter numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
        m+=1;
        }
        if(a[i]==0)
        {
        n+=1;
        }
        if(a[i]<0)
        {
        p+=1;
        }
    }
    printf("number is positive %d",m);
    printf("\nnumber is zero %d",n);
    printf("\nnumber is negative %d",p);
}