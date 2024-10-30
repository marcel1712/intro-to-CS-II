#include <stdio.h>

void insertion(int array[], int size){
    for(int i = 1; i< size;i++){

        int x = array[i];
        int j = i-1;

        while(j >=0 && array[j] > x){ //movendo os valores maiores para  direita e verificando se j>0
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = x; //inserindo o elemento na posicao correta
    }
}

int main(){

    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    insertion(array, size);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");


}