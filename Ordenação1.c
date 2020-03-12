#include <stdio.h>

void bubblesort(){

    int a, v[18] = {3,5,6,1,3,5,2,234,4,2,2,9,78,67,23,21,5,54}; //18 é 0 meu n

    for(int i = 18-1 ; i > 1; i--){

        for (int j = 0; j <= i-1; j++){

            if (v[j] > v[j+1]){
                
                a = v[j];
                v[j] = v[j+1];
                v[j+1] = a;


            }


        }



    }
    for(int h = 0; h<18; h++){
        printf(" %d", v[h]);
    }

}

void inserctionSort(){
        int pivo, j, n = 18;
        int a, v[18] = {3,5,6,1,3,5,2,234,4,2,2,9,78,67,23,21,5,54}; 
        for (int i = 1; i<= n-1; i++){
            pivo = v[i];
            j = i-1;
            while ( j >=0 && v[j] > pivo){
                v[j + 1] = v[j];
                j--;  
            }
            v[j+1] = pivo;

        }
        for(int h = 0; h<18; h++){
        printf(" %d", v[h]);
    }

}

void selectionsort(){
        int n = 18;
        int a, v[18] = {3,5,6,1,3,5,2,234,4,2,2,9,78,67,23,21,5,54}; //18 é 0 meu n
        int menor;

        for (int i = 0; i< n-1; i++){

                menor = i;

                for (int j = i+1; j < n; j++){
                    
                    if (v[j] < v[menor]){
                         menor = j;

                    }


                } 
            a= v[i];
            v[i] = v[menor];
            v[menor] = a;

        }
        for(int h = 0; h<18; h++){
        printf(" %d", v[h]);
    }


}
int main(){

    printf("\n\nBubbleSort: \n");
    bubblesort();
    printf("\n\nSelecionSort: \n");
    selectionsort();
    printf("\n\nInsertionSort: \n");
    inserctionSort();

}