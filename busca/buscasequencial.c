#include <stdio.h>

int Busca(int array[], int size, int x)
{
    for(int i = 0; i<size; i++){
        if(array[i] == x){
            printf("O valor %d foi encontrado na posicao %d do array\n", x, i);
            return i;
        }
    }
    printf("Valor nao encontrado");
}


int main(){

    int size;

    scanf("%d", &size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    int x;
    printf("Coloque o valor a ser encotrado: ");
    scanf("%d", &x);
    Busca(array,size,x);


}