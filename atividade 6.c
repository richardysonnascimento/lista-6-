// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numeros[10];
    int i, valor = 0, encontrou = 0;
    for (i = 0; i < 10; i++){
        printf("Digite o número da posição %d:", i);
        scanf("%d", &numeros[pos]);
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);
    for (pos = 0; i < 10; i++){
        if (numeros[i] == valor){
            encontrou = 1;
            
        }
    }
    if(encontrou){
        printf("Valor encontrado!");
    }else{
        printf("Valor não encontrado!");
    }
    
    
    return 0;
}
