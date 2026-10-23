#include<stdio.h>
void main()
{
    int n,i,temp,max1,max2,a[10];
    printf("Enter the number of elements=");
    scanf("%d",&n);
    printf("\nEnter the array elements=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    max2=a[1];
    if(max2>max1)
    {
        temp=max1;
        max1=max2;
        max2=temp;
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("\nFirst maximum=%d",max1);
    printf("\nSecond maximum=%d",max2);
}