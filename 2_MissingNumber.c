#include <stdio.h>
int main(){
    long long int n = 0,index=0;
    do{
    fflush(stdin);
    scanf("%d",&n);
    }while(200000 < n || n < 2);
    int ListNumber[n];
    ListNumber[0]=-1;
    for (int i=1;i<n-1;i++){
        ListNumber[i]=i;
    }
    for(int i =0;i<n-1;i++){
        do{ 
        fflush(stdin);
        scanf("%d",&index);
        }while (ListNumber[index]==-1);
    }
    for (int i=1;i<n-1;i++){
        if(ListNumber[i]!=-1){
            printf("%d",ListNumber[i]);
            return 0;
        }
    }
    return 1;
}