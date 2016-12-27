#include <stdio.h>
int main()
{
    int i,n,num;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&num);
        if((num % 2) == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return 0;
}
