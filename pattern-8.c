
#include<stdio.h>

int main(){

    for(int i=45; i<=49; i++){

        for(int j=45; j<=i; j++){
            printf("%d",j);
        }

        printf("\n");
    }

    return 0;
}