// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numoros [12];
    int i,  pares = 0;
    
    for (i = 0; i < 12; i++){
    printf ("digite o numoro da posicao desejada  %d:" , i) ;
    scanf ("%d", &numoros[i]);
    }
   
    for (i = 0 ; i < 12 ; i++){
        if (numoros [i] % 2 == 0){
           pares++;
        }
    }
    printf("quantidade de pares = %d\n ", pares);
    
    return 0;
}
