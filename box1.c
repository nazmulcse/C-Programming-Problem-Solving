#include<stdio.h>
int main()
{
    int i,T,m,j,k;
    scanf("%d",&T);
    for(i = 0;i<T;i++){
        scanf("%d",&m);
        for(j=0;j<m;j++){
            for(k=0;k<m;k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
