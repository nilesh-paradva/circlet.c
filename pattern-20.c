#include<stdio.h>

int main(){

    int px=4, py=4;

    for(int i=1; i<=4; i++){

        for(int j=1; j<4*2; j++){

            if(j==px || j==py){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        px--;
        py++;

        printf("\n");
    }

    return 0;
}