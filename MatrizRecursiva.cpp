#include <iostream>
#define SIZE 3

using namespace std;


void imprimirMatriz(int c[][SIZE]){
    for(int i = 0; i < SIZE; i++){
        cout << "|";
        for(int j = 0; j < SIZE; j++){
            cout << "\t" << c[i][j] <<"\t";
        }
        cout << "|" << endl;
    }
}


void sumaMatrices(int a[][SIZE], int b[][SIZE], int c[][SIZE], int i, int j){
    c[i][j] = a[i][j] + b[i][j];
    
    if(j == 0 && i > 0){
        sumaMatrices(a,b,c,i-1,SIZE-1);
    }
    else if(j == 0 && i == 0){
        imprimirMatriz(c);
        return;
    }
    else{
        sumaMatrices(a,b,c,i,j-1);
    }
    
}



int main()
{
    int matrizA[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    int matrizB[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    int matrizC[SIZE][SIZE];
    sumaMatrices(matrizA, matrizB, matrizC, SIZE-1, SIZE-1);
    
    return 0;
}
