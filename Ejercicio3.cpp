#include<iostream>
using namespace std;

int Menor(int arr[], int n){
	int min;
	if(n==1){
		return arr[0];
	}
	else{
		min = Menor(arr, n-1);
		if(arr[n-1]>min){
			return min;
		}
		else{
			return arr[n-1];
		}
	}
}

int main()
{
  int i, n, arr[100];
  cout << "Ingrese la longitud del vector: ";
  cin >> n;
  for(i=0;i<n;i++)
    {
    	cout << "Ingrese el valor de la posicion "<<i<<" del vector: ";
        cin >> arr[i];  
    }
  std::cout << "El numero menor del arreglo es: "<< Menor(arr,n)<< "\n";
}
