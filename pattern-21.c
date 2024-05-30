#include<stdio.h>

int main(){

    int no=0;
    for(int i=1; i<=5; i++){

        for(int j=1; j<=i; j++){
            no++;
            if(no==12){
                continue;
            }
            printf("%d ",no);
        }

        printf("\n");
    }

    return 0;
}