#include <iostream>
using namespace std;
template <class T> class MiClase{
  private:
      T x_, y_;
  public:
      MiClase (T a, T b){ x_=a; y_=b;};
      T divide(){return x_/y_;};
};
int main(){
  MiClase <int> enteros(10,3);
  MiClase <double> dobeles(3.3, 5.5);
  cout << "DIVISION DE ENTEROS = " << entero.divide() << endl;
  cout << "DIVISION DE REALES = " << dobeles.divide() << endl;
}
