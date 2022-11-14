#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;
#include "Secuencias.cpp"

bool esPar(int dato){
	return ( (dato % 2) == 0 );
}

int main(){
	/* Lexico */
	list<int>S;
	list<int>::iterator EA;

	/* Comenzar */
	cargarFichero(S,"entrada7.3.txt");
	EA = S.begin();
	/* MIENTRAS NO FDS Y DESPUÉS NO Pro (EA) HACER */
	while ( (EA != S.end()) && (!esPar(*EA)) ){
		/* AVANZAR */
		cout << *EA << endl;
		EA++;
	} /* FIN_MIENTRAS*/
	/* SEGUN FDS*/
	if (EA == S.end()){ /* Tratamiento del elemento no encontrado */
		cout << "No se ha encontrado un número par " << endl;
	}
	else {
		cout << "Encontrado par " << *EA << endl;
	}
} 











