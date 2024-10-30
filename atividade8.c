#include <stdio.h>

int BuscaBrec(int array[], int c, int f, int x){
    if(c>f){
        return -1;
    }
    int m = (c+f)/2;
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

    int k;
    scanf("%d", &k);
    int array2[k];

    for(int i = 0; i < k;i++){
        scanf("%d", &array2[i]);
    }
    
    quick(array,0,size-1);

    for(int i = 0; i < k;i++){
        if(BuscaB(array, size, array2[i])!= -1){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
}