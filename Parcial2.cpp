#include <iostream>

using namespace::std;

struct nodo {
	int num_list;
	nodo* sig;
} *cabeza, *cola;

void insertar_nodo();

int main {

	int menu_prin = 0;
	
	while ( menu_prin != 4){
	
	cout << "Ingrese el numero correspondiente a la accion que desea realizar: \n\n";
	cout << "1). Ingresar un nuevo numero a la lista.\n";
	cout << "2). Ver los numeros enlistados de mayor a menor.\n";
	cout << "3). Salir del programa.\n\n";
	
	cin >> menu_prin;
	
		switch (menu_prin){
		
			case 1:
				insertar_nodo();
			break;
			
			case 2:
				mostrar_lista();
			break;
			
			case 3:
				cout << "\nPrograma terminado.\n\n";
			break;
			
			default:
				cout << "\nOpcion invalida. Intente nuevamente.\n\n";
			break;
		}	
	}

    return 0;
    
}

void insertar_nodo(){
	
	nodo* nuevo = new nodo ();
	cout << "Ingrese el siguiente numero que quiere ingresar a la lista: ";
	cin >> nuevo->num_list;
	
	if (cabeza == NULL){
		
		cabeza = nuevo;
		cabeza->sig = NULL;
		cola = nuevo;
	} else {
		
		cola->sig = nuevo;
		nuevo->sig = NULL;
		cola = nuevo;
		
	}
	
	cout << "\n\nNumero ingresado a la lista.";
	
}
