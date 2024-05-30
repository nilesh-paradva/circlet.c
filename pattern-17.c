#include<stdio.h>

int main(){

    for(int i=5; i>=1; i--){

        for(int j=1; j<=i; j++){
            printf(" ");
        }

        for(int j=1; j<=(6-i); j++){
            printf("%d",j);
        }

        printf("\n");
    }

     for(int i=1; i<=5; i++){
        if(i==1){
            continue;
        }
        for(int j=1; j<=i; j++){
            printf(" ");
        }

        for(int j=i; j<=5; j++){
            printf("%d",j);
        }

        printf("\n");
    }


    return 0;
}