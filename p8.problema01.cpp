#include <iostream>
using namespace std;

int main () {
	const int N = 10;
	typedef int Vector [N];
	int i;
	int ultimo;

	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector p = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector z;

	/* rotación en la tabla 'z' */
	z[0] = t[N-1];
	for (i = 1; i < N; ++i) {
		z[i] = t[i-1];
	}
	
	/* copia a la tabla 't' */
	for (i = 0; i < N; ++i) {
		t[i] = z[i];
	}
	
	/* escribir el resultado */
	for (i = 0; i < N; ++i) {
		cout << t[i] << ", ";
	}
	
	//Ahora sin tabla intermedia
	ultimo = p[N-1];
	for (i = N-1; i > 0 ; --i){
	   p[i] = p[i-1];
	}
	p[0] = ultimo;
	
	cout << endl;
	/* escribir el resultado */
	for (i = 0; i < N; ++i) {
		cout << p[i] << ", ";
	}
}
