#include<stdio.h>


int main(){

    int mid = (9-1)/2, last = 9-1;


    for(int i=0; i<9; i++){

        for(int j=0; j < 2*9; j++){
            if(j==9-1+i || j==9-1-i || (i == mid && j>=9-i && j<2*last-i)){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");

    }

    printf("\n\n");

    for(int i=1; i<=5; i++){

        for(int j=1; j<=5; j++){
            if(j==1 || i==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }

        printf("\n");
    }
    printf("\n\n");
    for(int i=1; i<=5; i++){

        for(int j=1; j<=5; j++){
            if(j==1 || i==5){
                printf("* ");
            }else{
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\n\n");
    
    char ch='*';
    for (int i = 0; i < 7; i++) {

        printf(" ");
        for (int t = 0; t < 7; t++) {

            if (i < 1 && t < 7) {
                printf("%c", ch);
            }

            if (i > 0 && t < 3)
                printf(" ");
            if (i > 0 && t > 3
                && t < 5) {
                printf("%c", ch);
            }
            if (i > 1 && t > 4)
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    char ch2='*';
    for (int i = 0; i < 7; i++) {
        printf(" ");
        for (int h = 0; h < 8; h++) {
            if (h < 1 || h > 6) {
                printf("%c", ch2);
            }
            else if (i > 2 && i < 4) {
                printf("%c", ch2);
            }

            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    char ch1='*';
    for (int i = 0; i < 8; i++) {
        printf(" ");
        for (int j = 0; j < 7; j++) {
            if (i == 0) {
                printf("%c", ch1);
            }
            else if (i > 0 && i < 3
                     && j < 1) {
                printf("%c", ch1);
            }
            else if (i == 3 && j < 6) {
                printf("%c", ch1);
            }
            else if (i > 3 && i < 6
                     && j < 1) {
                printf("%c", ch1);
            }
            else if (i == 6) {
                printf("%c", ch1);
            }

            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 || i == 7 / 2 || i == 7 - 1) && j < 5 - 1 || j == 5 - 1 && i != 0 && i != 7 / 2 && i != 7 - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    printf("\n\n");

    char ch4='*';
    for (int i = 0; i < 8; i++) {
        printf(" ");
        for (int j = 0; j < 7; j++) {
            if (i == 0) {
                printf("%c", ch4);
            }
            else if (i > 0 && i < 3
                     && j < 1) {
                printf("%c", ch4);
            }
            else if (i == 3 && j < 6) {
                printf("%c", ch4);
            }
            else if (i > 3 && i < 6
                     && j < 1) {
                printf("%c", ch4);
            }
            else if (i == 6) {
                printf("%c", ch4);
            }

            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    char ch5='*';
    for (int i = 0; i < 8; i++) {
        printf(" ");
        for (int j = 0; j < 7; j++) {
            if (i == 0 && j > 0) {
                printf("%c", ch5);
            }
            else if (i > 0 && i < 3
                     && j < 1) {
                printf("%c", ch5);
            }
            else if (i == 3 && j > 0
                     && j < 6) {
                printf("%c", ch5);
            }
            else if (i > 3 && i < 6
                     && j > 5) {
                printf("%c", ch5);
            }
            else if (i == 6 && j < 6) {
                printf("%c", ch5);
            }

            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");

    char ch6='*';
    for (int i = 0; i < 7; i++) {

        printf(" ");
        for (int t = 0; t < 7; t++) {

            if (i < 1 && t < 7) {
                printf("%c", ch6);
            }

            if (i > 0 && t < 3)
                printf(" ");
            if (i > 0 && t > 3
                && t < 5) {
                printf("%c", ch6);
            }
            if (i > 1 && t > 4)
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}