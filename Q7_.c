#include<stdio.h>
int main()
{
    int x[10] = {0},i,max1,max2,t;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    max1 = x[0];
    for(i=1;i<10;i++)
    {
        if(x[i]>max1)
        max1 = x[i];
        t=i;
    }
    max2 = x[0];
    for(i=0;i<10;i++)
    {
        if((i!=t)&&(x[i]>max2))
        {
            max2 = x[i];
        }
    }
    printf("\nThe second largest number in the array is %d",max2);
    return 0;
}