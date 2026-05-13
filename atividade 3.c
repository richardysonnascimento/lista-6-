// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numoros [10];
    int i,  maior;
    
    for (i = 0; i < 10; i++){
    printf ("digite o numoro da posicao desejada  %d:" , i) ;
    scanf ("%d", &numoros[i]);
    }
    maior = numoros [0];
    for (i = 0 ; i <10; i++){
        if (numoros [i] > maior){
            maior = numoros[i];
        }
    }
    printf("o maior numoro e %d", maior);
    
    return 0;
}
