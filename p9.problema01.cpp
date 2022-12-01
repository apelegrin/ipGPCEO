#include <iostream>
#include <fstream>

using namespace std;

const int GRADOS = 8;
const int CURSOS = 11;
typedef int Matriz[CURSOS][GRADOS];

void cargarFichero (Matriz &S, int &NF, int &NC, string nombre) {
	ifstream f;
	int i, j;
	f.open (nombre);
	if (!f){
		cout << "Error abriendo el fichero" << endl;
	}
	else {
		f >> NF;
		f >> NC;
		for (i=0; i < NF; i++) {
			for (j=0; j < NC; j++) {
				f >> S[i][j];
			}
		}
	}
	f.close();
}

void mostrarTabla(Matriz t, int nf, int nc){
	int i, j;
	cout << "  "; 
	for (i = 0; i < nc; ++i) {
		cout << "G." << i << "  ";
	}
	cout << endl;
	for (i = 0; i < nf; ++i) {
		for (j = 0; j < nc; ++j) {
			if (t[i][j] < 100) 
				cout << "  " << t[i][j]<<";";
			else
				cout << " "  << t[i][j]<<";";
		}
		cout << endl;
	}
}

int buscarCursoMaxAlumnos(Matriz t,int nf, int nc){
	int anoMax;
	int anoSumMax;
	int suma;
	
	anoMax = 0;
	anoSumMax = -1;
		
	for (int i = 0; i < nf; ++i) {
		suma = 0;
		for (int j = 0; j < nc; ++j) {
			suma = suma + t[i][j];
		}	
		if (suma > anoSumMax){
			anoMax = i;
			anoSumMax = suma;
		}
	}
	return anoMax;
}

int main(){
	Matriz t;
	int nf;
	int nc;
	int cursoMaxAlumnos;
	
	cargarFichero(t,nf,nc,"egresados.txt");
	mostrarTabla(t,nf,nc);
	cursoMaxAlumnos = 0;
	cursoMaxAlumnos = 1990+buscarCursoMaxAlumnos(t,nf,nc);
	cout << "El curso con más egresados fue " << cursoMaxAlumnos << endl;
}

