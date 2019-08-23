#include <iostream>

using namespace std;

int potencia(int x, int n){
    if(n == 0)
        return 1;
    return x*potencia(x, n-1);
    
}

int main()
{
    int x, n;
    cout << "Ingrese la base: ";
    cin >> x;
    cout << "Ingrese el exponente: ";
    cin >> n;
    cout << "El resultado es: " << potencia(x,n);

    return 0;
}

