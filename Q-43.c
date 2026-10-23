#include<stdio.h>
int main()
{
    int number[10],i;
    int sum=0;
    printf("enter the array of element:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&number[i]);
    }
    for(i=0;i<10;i++)
    sum+=number[i];

    printf("sum of number : %d",sum);

}