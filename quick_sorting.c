#include<stdio.h>
#include <stdlib.h>
int array[5];
int divide(int array[],int start,int end);
int sort(int array[],int start,int end);
int main()
{
    int i,T,j;
    scanf("%d",&T);
    for(i = 1;i<=T;i++){
        for(j=0;j<3;j++)
          scanf("%d",&array[j]);
        divide(array,0,2);
        printf("Case %d: ",i);
        for(j=0;j<3;j++)
          printf("%d ",array[j]);
        printf("\n");
    }
    return 0;
}

int divide(int array[],int start,int end)
{
    int pivot;
    if(start>=end){
        return;
    }else{
        pivot=sort(array,start,end);
        divide(array,start,pivot-1);
        divide(array,pivot+1,end);
    }
}

int sort(int array[],int start,int end)
{
    int i,j,pivot;
    i=start;
    j=end;
    pivot=array[start];
    int moveptr_right=1;
    while(i<j)
    {
        if(moveptr_right){
            if(array[j]<pivot){
                array[i]=array[j];
                i++;
            moveptr_right=0;
            }else{
                j--;
            }
        }else{
            if(array[i]>pivot){
                array[j]=array[i];
                j--;
                moveptr_right=1;
            }else{
                i++;
            }
        }
    }
    array[j]=pivot;
    return j;
}
