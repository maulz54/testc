#include <iostream>
using namespace std;
int main() {
  
    int num, cont = 0, sum = 0;

    do{
        cout << "ingrese el numero: ";
        cin >> num;
        cont++;
        sum += num;
    }
    while( num > 0 );

    // el ultimo dato leido es negativo
    // entonces se debe descartar, de la suma y
    // de la cantidad de valores leidos
    sum -= num;
    cont --;

    // aplicando media aritmética
    float med = (float)sum / cont;
    cout << "La media es: " << med <<"\n";
    return 1;
}