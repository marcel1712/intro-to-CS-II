#include <stdio.h>

void heapify(int array[], int p, int u){
    if(p<=u){
        int c = (2*p)+1;
        if(c <= u){         //verificar se p tem filho dentro do array
            if(c+1 <= u && array[c+1] > array[c]){ //se o filho c+1 estiver dentro do array tbm e tiver um valor maior que c transforme o filho c em c+1
                c++;
            }
            if(array[c]>array[p]){
                int tmp = array[c];
                array[c] = array[p];
                array[p] = tmp;
                heapify(array,c,u);//fazer o mesmo com os filhos de c
            }
        }
    }
}

//
void heap(int array[], int n){
    for(int i = (n/2)-1; i>=0;i--){
        heapify(array,i,n-1);
    }
    for(int j=n-1;j>=1;j--){
        int tmp = array[0];
        array[0] = array[j];
        array[j] = tmp;
        heapify(array,0,j-1);
    }
}

int main(){

    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    heap(array,size);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");


}