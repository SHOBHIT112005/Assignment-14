#include<stdio.h>
int main()
{
    int a[10]={0},i,sum_odd = 0,sum_even = 0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]%2==0)
    {
        sum_even = a[0];
        for(i=1;i<10;i++)
        {
            if(a[i]%2==0)
            sum_even = sum_even + a[i];
            else
            sum_odd = sum_odd + a[i];
        }
    }
    else if(a[0]%2 != 0)
    {
        sum_odd = a[0];
        for(i=1;i<10;i++)
        {
            if(a[i]%2!=0)
            sum_odd = sum_odd + a[i];
            else
            sum_even = sum_even + a[i];
        }
    }
    printf("\n");
    printf("The sum of the even elements of the array is %d\n\n",sum_even);
    printf("The sum of the odd elements of the array is %d\n\n",sum_odd);
    return 0;
}