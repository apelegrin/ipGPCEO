
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main()
{
    /* Lexico */	
    list<int> S1;
    list<int> S2;
    list<int> T;
    list<int>::iterator EA_S1;
    list<int>::iterator EA_S2;
    int h1, h2;
    
    // Cargar secuencia
    cargarFichero(S1,"entrada5_1.txt");
    cargarFichero(S2,"entrada5_2.txt");
    
    //inicializamos las variable
    T.clear();
    
    // Comenzar(S)
    EA_S1 = S1.begin();
    EA_S2 = S2.begin();
    
    // Iterar mientra no fin de secuencia
    while ( (EA_S1 != S1.end()) && (EA_S2 != S2.end()) ) {
		// Procesar
	    h1 = *EA_S1;
	    h2 = *EA_S2;
	    
	    // Si coinciden guardar y avanzar
	    if (h1 == h2) {
			cout << h1 << " " << endl;
			T.push_back(h1);
			EA_S1++;
			EA_S2++;
		}
		// Si h1 > h2 avanzar S2
		else if (h1 > h2) {
			EA_S2++;
		}
		else {
			EA_S1++;
		}		
	}
	// Procesado final
	guardarFichero(T,"salida5.txt");
	return 0;
}






