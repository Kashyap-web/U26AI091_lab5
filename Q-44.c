#include<stdio.h>
int main()
{
    int i,a[10],m=0,n=0;
    printf("enter array elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        m+=1;
        else
        {
        n+=1;
        }
    }
    printf("odd number  %d",n);
    printf("\neven number  %d",m);


}
