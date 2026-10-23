
#include <stdio.h>

int main()
{
    int a[5];
    int i, j, min, temp;
     printf("enter elements  :");
    for(i=0;i<5;i++)
    {
         scanf("%d",&a[i]);
    }

    for(i = 0; i < 4; i++)
    {
        min = i;

        for(j = i + 1; j < 5; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
