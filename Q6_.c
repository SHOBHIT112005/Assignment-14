#include<stdio.h>
int main()
{
    int a[10]= {0},i,j,x;
    printf("Enter 10 elements of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(a[i]>a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    printf("The sorted array is :-\n");
    for(i = 0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}