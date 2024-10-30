#include <stdio.h>
#include <stdlib.h>

int comparacoesQ;
int comparacoesS;

void shell(int v[], int n) {

    int gap = 1;

    while(gap <= n) {

        gap *= 2;

    }

    gap = gap / 2 - 1;

    while(gap > 0) {

            for (int i = gap; i < n; i++){

                int x = v[i];
                comparacoesS++;

                int j = i - gap;

                while(j >= 0 && v[j] > x) {

                    v[j + gap] = v[j];
                    comparacoesS+=2;
                    j -= gap;

                }
                if(j >= 0){
                    comparacoesS++;
                }

                v[j + gap] = x;
                comparacoesS++;

            }

        gap /= 2;

    }

}

void quick(int v[], int f, int l) {

        if (f >= l) {
                return;

        }

        int m = (l + f)/2;

        int pivot = v[m];
        comparacoesQ++;

        int i = f;

        int j = l;

        while(1) {

                while(v[i] < pivot) {

                        i++;
                        comparacoesQ++;

                }

                while(v[j] > pivot) {

                        j--;
                        comparacoesQ++;

                }
                comparacoesQ+=2;

                if (i >= j) {
                        break;

                }

                int aux = v[i];

                v[i] = v[j];

                v[j] = aux;

                i++;

                j--;
                comparacoesQ+=3;

        }

        quick(v, f, j);

        quick(v, j+1, l);

}

int main(){
    int size;

    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size;i++){
        scanf("%d", &array[i]);
    }

    // shell(array, size);

    // for(int i = 0; i < size;i++){
    //     printf("%d ", array[i]);
    // }

    for(int i = 0;i < size; i++){

        int arrayQ[i+1];
        int arrayS[i+1];

        for(int j = 0;j<i+1;j++){
            arrayQ[j] = array[j];
            arrayS[j] = array[j];
        }

        comparacoesQ = 0;
        comparacoesS = 0;

        shell(arrayS,i+1);
        quick(arrayQ, 0, i);

        // printf("Comparações: %d %d ", comparacoesQ, comparacoesS);

        if(comparacoesQ > comparacoesS){
            printf("S ");
        }else if(comparacoesS > comparacoesQ){
            printf("Q ");
        }else{
            printf("- ");
        }

        // for(int j = 0; j < i+1 ;j++){
        //     printf("%d ", arrayS[j]);
        // }
        // for(int j = 0; j < i+1 ;j++){
        //     printf("%d ", arrayQ[j]);
        // }
        // printf("\n");
    }

    printf("\n");
}