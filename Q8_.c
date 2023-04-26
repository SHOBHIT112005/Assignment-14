#include<stdio.h>
int main()
{
    int x[10] = {0},i,min1,min2,t;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    min1= x[0];
    for(i=1;i<10;i++)
    {
        if(x[i]<min1)
        {
            min1 = x[i];
            t=i;
        }
    }
    min2=x[0];
    for(i=0;i<10;i++)
    {
        if((i!=t)&&(x[i]<min2))
        {
            min2 = x[i];
        }
    }
    printf("\nThe second smallest number in the array is %d",min2);
    return 0;
}