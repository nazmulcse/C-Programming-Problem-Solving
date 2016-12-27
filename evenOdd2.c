#include <stdio.h>
#include <string.h>

int main()
{
    int i,T,len,lastNumber;
    char num[102],lastChar;
    scanf("%d",&T);
    for(i = 0;i<T;i++)
    {
        scanf("%s",num);
        len = strlen(num);
        lastChar = num[len-1];
        lastNumber = lastChar - '0';
        if((lastNumber % 2) == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return 0;
}
