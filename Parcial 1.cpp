#include <iostream>
using namespace std;

int main (){
	
	float sig_num = 0;
	int x = 0;
	cout << "Ingrese el valor de cuantos numeros quiere ingresar a la lista: ";
	cin >> x;
	
	float list [x];

	for ( int i = 0 ; i < x ; i = i+1){
		
		cout << "\n\nIngrese el numero que quiere ingresar a la posicion " << i+1 << " de la lista: ";
		cin >> sig_num;
		list [i] = sig_num;
	}
	
	
for (int i = 0 ; i < x ; i = i + 1) {

	for (int i = 0 ; i < x ; i = i + 1) {
		
		if (list [i] < list [i+1]) {
			
			sig_num = list [i];
			list [i] = list [i+1];
			list [i+1] = sig_num;
			
		} else{
			
		}
		
	}
}
	
	cout << "\n\nLos numeros ingresados a la lista organizados de mayor a menor son: \n";
	
	for ( int i = 0 ; i < x ; i = i+1){
		
		cout << " " << list [i] << endl;
		
	}
}
