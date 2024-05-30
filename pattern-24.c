#include<stdio.h>


int main(){

    int i=1,j,k,l,m;

    for(i=1,m=5; i<=5,m>=1; i++,m--){

        for(j=5-i; j>=1; j--){
            printf(" ");
        }
        for(k=5; k>=6-i; k--){
            printf("%d",k);
        }
        for(l=m+1; l<=5;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    
    for(i=5,m=2; i>=1,m<=5; i--,m++);

    return 0;
}