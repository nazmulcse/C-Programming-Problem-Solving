#include<stdio.h>
long int arr[102];
int main()
{
    long int n,i,age,k,j,m=0;;
    while (scanf("%ld",&n)==1)
    {
        m=0;
        if (n==0)
        break;

        for(i=1;i<=n;i++)
        {
            scanf("%ld", &age);
            arr[age] = arr[age] + 1;
        }
        for(k = 1; k<=100; k++)
        {
            if(arr[k]>0)
            {
                for(j = 1; j<=arr[k]; j++){
                    m+=1;
                    if(m!=1)
                      printf(" ");
                    printf("%ld", k);
                }
            }

        }
        printf("\n");

        for(i=1;i<=100;i++)
            arr[i]=0;

    }
    return 0;
}
