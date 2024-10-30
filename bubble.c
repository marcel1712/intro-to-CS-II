#include <stdio.h>

void bolha(int array[],int size){
    int troca, num;
    for(int i=0;i < size -1;i++){
        troca = 0;
        for(int j = 0; j<size-i-1;j++){
            if(array[j]>array[j+1]){
                num = array[j];
                array[j] = array[j+1];
                array[j+1] = num;
                troca = 1;
            }
        }
        if(!troca){
            break;
        }
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


}