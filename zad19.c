#include <stdio.h>
#include "sortstr.h"
#include <string.h>

int main(){
    char* tab[]={"Wojtek", "Michal", "Pawel", "Sylwek", "Damian", "Bartek", "Kuba", "Adam"};
    int size = sizeof(tab)/sizeof(char*);
    printf("Przed sortowaniem:\n");
    for (int i=0; i<size; i++) {
        printf("%s  ", tab[i]);
    }
    printf("\n");
    bubblestr(tab, size);  //rodzaj sortowania (selectstr / bubblestr)
    printf("Po sortowaniu:\n");
    for (int j=0; j<size; j++) {
        printf("%s  ", tab[j]);
    }
    printf("\n");
    return 0;
}
