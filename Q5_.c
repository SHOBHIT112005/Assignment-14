#include<stdio.h>
int main()
{
    int x[10] = {0},i,min;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    min= x[0];
    for(i=1;i<10;i++)
    {
        if(x[i]<min)
        min = x[i];
    }
    printf("\nThe smallest number in the array is %d",min);
    return 0;
}