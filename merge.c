#include <stdio.h>

void merge(int array[], int c, int f,int b[]){
    if(c>=f){ //verificando se tem alguma tarefa para fazer
        return;
    }
    int m = (c+f)/2;//encontrando o meio do vetor

    merge(array,c,m,b);
    merge(array,m+1,f,b);

    //contadores da posicao inicial e final do vetor
    int i1 = c;
    int i2 = m+1;
    int j = 0; //contador do vetor auxiliar
    
    //comparando as duas listas e colocando o meno valor
    while(i1 <= m && i2 <=f){
        if(array[i1] <= array[i2]){
            b[j] = array[i1];
            i1++;
            j++;
        }else{
            b[j] = array[i2];
            i2++;
            j++;
        }
    }
    //caso o vetor termine copie o restante dos valroes
    while(i1 <= m){
        b[j] = array[i1];
        i1++;
        j++;
    }
    while(i2 <= f){
        b[j] = array[i2];
        i2++;
        j++;
    }
    //voltando os valores do vetor auxiliar b para o vetor original a
    j = 0;
    for(int i = c;i<=f;i++){
        array[i] = b[j];
        j++;
    }

}

int main(){

    int size;

    scanf("%d",&size);
    int array[size];
    int arrayb[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    merge(array,0,size-1,arrayb);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");


}