
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;
const char MARCA_FIN_LINEA = '\n';


void guardarFichero (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}//end-while
		f.close();
	}
};

void cargarFichero (list<int> &S, string nombre) {
	ifstream f;
    int dato;
    
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (f >> dato) {
			S.push_back (dato);
		}
		f.close();
	}//end-if
};

int main()
{
    /* Lexico */	
    list<int> S;
    list<int>::iterator EA;
    int suma;
    
    // Cargar secuencia
    cargarFichero(S,"entrada4.txt");
    // Comenzar(S)
    EA = S.begin();
    suma = 0;
    // Iterar mientra no fin de secuencia
    while (EA != S.end()) {
		// Procesar
		suma = suma + *EA;
		cout << suma << " ";
		// Avanzar
		EA++;
	}
	// Procesador final
	return 0;
}






