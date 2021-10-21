#include <iostream>
#include <math.h> /* log10 */
using namespace std;

int main() {
  
  int n, m = 1, a;
  double res = 0;
  cout << "Ingrese el número W: ";
  cin >> n;

  for( int i = 1; i < n; i++){
    if( n % i == 0 ){
      // conformando el numero
      // res = (res * 10) + i;

      // considerando divisores mayores a un digito
      int digitos = (int)log10(i) + 1;
      res = (res * pow(10, digitos)) + i; 
    }
  }
  cout<<fixed<<"Numero formado por los divisores: "<< res <<"\n";
  return 1;
}