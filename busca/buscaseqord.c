#include <stdio.h>

int Buscaord(int array[], int size, int x)
{
    int i = 0;
    while(i < size && x >array[i]){
        i++;
    }
    if(i<size && x==array[i]){
        printf("O valor %d foi encontrado na posicao %d do array\n", x, i);
        return i;
    }else{
        printf("Valor nao encontrado");
        return -1;
    }
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
    Buscaord(array,size,x);


}