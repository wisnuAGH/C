#include<stdio.h>
#include<string.h>
#include"sortstr.h"
#include<malloc.h>
/*
void swap(char *tab1, char *tab2){
    char hold = *tab1;
    *tab1 = *tab2;
    *tab2 = hold;
}
*/
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
