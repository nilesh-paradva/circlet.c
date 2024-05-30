#include<stdio.h>

int main(){

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int k=5; k>i; k--){
            if(i==5){
                continue;
            }
            printf(" ");
        }
        for(int k=5; k>i; k--){
            if(i==5){
                continue;
            }
            printf(" ");
        }
        for(int a=i; a>=1; a--){
            printf("%d",a);
        }
        printf("\n");
    }

    return 0;
}