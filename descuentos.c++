#include <iostream>
using namespace std;

int main() {
  
  int n, tp, desc;
  float pre, total = 0, pago;
  cout << "****** DESCUENTOS ******"<< endl
         << "1: Lacteos 5% off"<< endl
         << "2: Panaderia 7% off"<< endl
         << "3: Productos del hogar 10% off"<< endl;

  cout << "Ingrese la cantidad de productos: ";
  cin >> n;

  for( int i = 0; i < n; i++){
    cout <<endl<< "Producto "<<i+1<<endl;
    cout << "Tipo de producto (1, 2, 3, 4): ";
    cin >> tp;
    switch(tp)
    {
      case 1:
        desc = 5;
      break;
      case 2: ;
        desc = 7;
      break;
      case 3: 
        desc = 10;
      break;
      default:
        desc = 0;
    }
    
    cout << "Precio del producto Bs.: ";
    cin  >> pre;

    pre = pre * ( 100 - desc ) / 100;
    total = total + pre;

    if ( desc != 0){
      cout << "Precio con descuento: "<<pre<<endl;
    }

  }

  cout << "El total de la compra es: "<<total<<endl;
  cout << "Monto con el que se paga: ";
  cin >> pago;
  cout << "Cambio: "<<pago-total<<endl;
  return 1;
}