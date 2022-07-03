#include<stdio.h>
#include<string.h>
#include"sortstr.h"

void bubblestr(char*tab[],int size){
    char* hold;
    for (int i=0; i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(strcmp(tab[j],tab[j+1])>0){

                hold = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = hold;
            }
        }
    }
}
