#include<stdio.h>
int fibonaccy(int i)
{
    if(i<=1){
        return i;
    }
    return fibonaccy(i-1) + fibonaccy(i-2);
}
int main()
{
    int n,i;
    printf("Enter number of terms in fibonaccy series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonaccy(i));
    }
}
