#include <stdio.h>

void bolha(int array[],int size){
    int temp;
    if(size < 1) return;
    for(int i = 0; i < size;i++){
        if(array[i]>array[i+1]){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
        bolha(array,size-1);
    }
}

int main(){
    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    bolha(array, size);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}