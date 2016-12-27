#include <stdio.h>
void findDivisor(int num){
    int i;
    for(i=1;i<=num;i++){
        if(num%i == 0){
            printf(" %d",i);
        }
    }
    printf("\n");
}
int main()
{
    int i,T,num;
    scanf("%d",&T);
    for(i = 1;i<=T;i++)
    {
        scanf("%d",&num);
        printf("Case %d:",i);
        findDivisor(num);
    }
    return 0;
}
