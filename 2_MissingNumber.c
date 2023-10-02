#include <stdio.h>
int CharTonum(char Num){
    switch(Num){
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
    }
}
int main(){
    long long int n = 0,index=0;
    do{
    fflush(stdin);
    scanf("%d",&n);
    }while(200000 < n || n < 2);
    int ListNumber[n];
    char Msg[2*n-1];
    for (int i = 0; i<)
    ListNumber[0]=-1;
    for (int i=1;i<n-1;i++){
        ListNumber[i]=i;
    }
    scanf("%s",Msg);
    for(int i =0; i < 2*n-1;i=i+2){
        ListNumber[CharTonum(Msg[i])]=-1;
        printf("%cd ",Msg[i]);
    }
    for (int i=1;i<n-1;i++){
        if(ListNumber[i]!=-1){
            printf("%d",ListNumber[i]);
        }
    }
    return 1;
}