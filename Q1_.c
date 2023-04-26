#include<stdio.h>
int main()
{
    int a[10]={0},i,sum;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sum = a[0];
    for(i=1;i<10;i++)
    {
        sum = sum + a[i];
    }
    printf("\n");
    printf("The sum of the elements of the array is %d",sum);
    return 0;
}