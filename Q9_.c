#include<stdio.h>
int main()
{
    int a[5] = {0},i=0,j=0;
    printf("Enter 5 positive elements of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Thereversed order array\n");
    for(j=4;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}