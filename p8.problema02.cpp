#include <iostream>
#include <fstream>
#include <list>
#include <map>

using namespace std;

#include "Secuencias.cpp"

typedef map<char, int> TipoHistograma;

int main () {
	/* Lexico */
	list<char> S;
	list<char>::iterator EA;
	
	TipoHistograma histo;
	float totalChar;
	float por;
	
	/* Inicializar el histograma*/
	for (char c='a'; c <= 'z'; c++){
		histo[c] = 0;
	}
	
	cargarFichero(S,"entrada8.1.txt");
	totalChar = 0;
	/* Esquema recorrido primer modelo */
	EA = S.begin();
	while (EA != S.end()) {
		/* Tratamiento */
		if (*EA != ' '){
			histo[*EA]++;
			totalChar++;
		}
		/* Avanzar*/
		EA++;
	}
	
	/* Imprimir los datos */
	for (char c='a'; c <= 'z'; c++){
		por = 100 * histo[c] / totalChar;
		cout << c << " - " <<
		 histo[c] << " - " << 
		 por  << endl;
	}
}






