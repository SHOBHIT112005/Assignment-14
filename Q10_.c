#include<stdio.h>
int main()
{
    int a[5] = {0},i=0,b[5] = {0};
    printf("Enter 5 positive elements of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The copied array is :-\n");
    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}