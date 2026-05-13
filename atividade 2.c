#include <stdio.h>

int main() {
    int numoros [8];
    int i, soma = 0;
    
    for (i = 0; i < 8; i++) {
    printf ("digite o numoro da posicao desejada  %d:" , i) ;
    scanf ("%d", &numoros[i]);
    soma = soma + numoros[i];
    }
    printf("a soma é %d", soma);
    
    return 0;
}
