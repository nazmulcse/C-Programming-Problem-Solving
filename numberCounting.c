#include<stdio.h>
#include<string.h>

int count_numbers(char str[])
{
    int i,count=0,len;
    len=strlen(str);
    for(i=0;i<len;)
    {
        if(str[i] == ' '){
            while(str[i] == ' '){
                i++;
            }
            count+=1;
        }else{
            i++;
        }
    }
    return (count+1);
}
int main()
{
    int T,i,len;
    char str[10000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
      scanf(" %[^\n]s",str);
      printf("%d\n",count_numbers(str));
    }
    return 0;
}
