#include<stdio.h>
int main()
{
    int number,data[100],i,temp,j;
    printf("How Many number do you want to sort ?\n");
    scanf("%d",&number);
    printf("Enter Number : ");
    for(i =0;i<number;i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=0;i<number-1;i++)
    {
        for(j=0;j<number-1;j++)
        {
            if(data[j] > data[j+1]){
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
            }
        }
    }
    printf("After Sorted, Your number is :\n");
    for(i =0;i<number;i++)
    {
        printf("%d ",data[i]);
    }
}
