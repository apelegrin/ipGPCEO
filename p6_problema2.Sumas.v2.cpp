
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main()
{
    /* Lexico */	
    list<int> S;
    list<int> T;
    list<int>::iterator EA;
    int suma;
    
    // Cargar secuencia
    cargarFichero(S,"entrada4.txt");
    
    //inicializamos las variable
    suma = 0;
    T.clear();
    
    // Comenzar(S)
    EA = S.begin();
    // Iterar mientra no fin de secuencia
    while (EA != S.end()) {
		// Procesar
		suma = suma + *EA;
		cout << suma << " ";
		T.push_back(suma);
		// Avanzar
		EA++;
	}
	// Procesado final
	guardarFichero(T,"salida4.txt");
	return 0;
}






