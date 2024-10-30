#include <stdio.h>

void quick(int array[],int c, int f){
    
    if(c>=f){
        return;
    }

    int m = (c+f)/2;
    int p = array[m];
    int i = c;
    int j = f;

    while(1){
        while(array[i]<p){
            i++;
        }
        while(array[j]>p){
            j--;
        }
        if(i<j){
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
            j--;
        }
        else{
            break;
        }
    }
    quick(array,c,j);
    quick(array,j+1,f);
}


int main(){

    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    quick(array,0,size-1);

    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");


}