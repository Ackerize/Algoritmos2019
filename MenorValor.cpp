#include <iostream>

using namespace std;

int menor(int a[], int indice, int minimo){
    if(indice == 0){
        return minimo;
    }
    else if(a[indice] < minimo){
        minimo = a[indice];
    }
    return menor(a, indice-1, minimo);
}

int main()
{
    int longitud_arreglo = 6;
    int arreglo[] = {4,2,5,3,6,-1};
    
    cout << menor(arreglo, longitud_arreglo - 1, arreglo[0]);
    
    return 0;
}
