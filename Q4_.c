#include<stdio.h>
int main()
{
    int x[10] = {0},i,max;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    max = x[0];
    for(i=1;i<10;i++)
    {
        if(x[i]>max)
        max = x[i];
    }
    printf("\nThe largest number in the array is %d",max);
    return 0;
}