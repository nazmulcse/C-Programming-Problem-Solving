#include<stdio.h>
#include <math.h>
enum {size = 100000};
int arr[size];
 void print_ara()
 {
     int i;
     for(i = 2; i < size; i++) {
         printf("%4d", arr[i]);
     }
     printf("\n");
     for(i = 2; i < size; i++) {
         printf("----");
     }
     printf("\n");
     for(i = 2; i < size; i++) {
         printf("%4d", i);
     }
     printf("\n\n\n");
 }
void sieve()
{
    int i,j,root;
    for(i=2;i<=size;i++){
        arr[i]=1;
    }
    root = sqrt(size);
   // print_ara();
    for(i=2;i<=root;i++){
        if(arr[i] == 1){
            for(j=2;j*i<=size;j++){
                arr[i*j] = 0;
            }
           // print_ara();
        }
    }
}
int is_prime(int n)
{
    if(n<2)
    {
        return 0;
    }else{
        return arr[n];
    }
}
int main()
{
    sieve();
    int n;
    printf("Enter a number (enter 0 to exit)");
    while(scanf("%d",&n)==1){
      if(n == 0) {
         break;
       }
       if(n >= size) {
         printf("The number should be less than %d\n", size);
         continue;
       }
       if(1 == is_prime(n)) {
             printf("%d is a prime number.\n", n);
         }
         else {
             printf("%d is not a prime number.\n", n);
         }
    }
}
