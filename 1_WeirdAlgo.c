#include <stdio.h>


int main(){
    long long int n = 0;
    do{
        fflush(stdin);
        scanf("%d",&n);
    }while (n > 1000000 || n < 1);
    printf("%lld ",n);
    while (n >1){
        if (n % 2 == 0){
            n=n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        printf("%lld ",n);
    }
    return 0;
}