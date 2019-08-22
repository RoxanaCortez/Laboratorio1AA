#include<iostream>
using namespace std;

double potencia(int x, int n){
    if(n==0)
    return 1;
    else
        return x*(potencia(x,n-1));
}

int main()
{
  int x, n;
  cout << "Ingrese un numero: ";
  cin >> x;
  cout << "Ingrese el valor del exponente: ";
  cin >> n;
  std::cout << "El resultado es: "<< potencia(x,n)<< "\n";
}
