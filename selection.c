#include <stdio.h>

void selection(int array[],int size){
    int min, aux;
    for(int i=0;i<size-1;i++){
        min = i;
        for(int j = (i+1);j < size;j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }
}

int main(){

    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    selection(array, size);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}