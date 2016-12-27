#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i >=1;i--){
        printf("%d\t",i);
        i-=1;
        printf("%d\t",i);
        i-=1;
        printf("%d\t",i);
        i-=1;
        printf("%d\t",i);
        i-=1;
        printf("%d\n",i);
    }
    return 0;
}
