#include <iostream>
#include <map> // <= Es necesario incluir este archivo de cabecera para usar el map

using namespace std;

typedef map<char, int> TipoHistograma;

int main () {
	TipoHistograma h;
	char c;
	
	// Inicializa las posiciones de h a 0, desde la 'a' hasta la 'z':
	for (c = 'a'; c <= 'z'; c++) { 
		h[c] = 0; 
	}

	// Ahora podríamos hacer operaciones como las siguientes:
	h['m'] = h['m'] + 7;
	cout << "h['m']=" << h['m'] << endl;
	
	c='m';
	h[c] = 2 * h[c];
	cout << "h['m']=" << h['m'] << endl;

}
