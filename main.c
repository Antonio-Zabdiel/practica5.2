#include<stdio.h>

int main(){
    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 0 ; i < 8 ; i++){
        for (j = 0; j < 8 ; j++)
        {
            if(i != 0 && i != 7){
                k++;
                printf("*\t*");
                if(k >= 1){
                    break;
                } 
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
