#include <stdio.h>

int BuscaBrec(int array[], int c, int f, int x){
    if(c>f){
        return -1;
    }
    int m = (x-array[c])*(f-c)/(array[f]-array[c])+c;//formual para buscar em menos posicoes
    if(x == array[m]){
        return m;
    }
    if(x > array[m]){
        return BuscaBrec(array,m+1,f,x);
    }else{
        return BuscaBrec(array,c,m-1,x);
    }
}

int BuscaB(int array[], int size, int x){
    return BuscaBrec(array,0,size-1,x);
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

    printf("%d\n",BuscaB(array,size,x) );


}