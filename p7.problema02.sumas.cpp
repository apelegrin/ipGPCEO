#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;
#include "Secuencias.cpp"

int main(){
	/* Lexico */
	list<int>S;
	list<int>::iterator EA;
	list<int>R;
	int anterior;
	
	/* Comenzar; */
	cargarFichero(S,"entrada7.2.txt");
	EA = S.begin();
	
	/* SEGÚN FDS */
    if (EA == S.end()){ /* FDS : */
          /* {Tratamiento sec. vacía } */
          cout << "Fichero sin datos " << endl;
    }
    else { /* NO FDS : */
          /* { Tratamiento 1er elemto. } */
          anterior = *EA;
          do { /* ITERAR */
               /* Avanzar */
               EA++;
          if (EA == S.end()) { // DETENER FDS; //
               break;
          }
          /* { Tratamiento de EA }*/
          R.push_back(anterior+*EA);
          anterior = *EA;
          }while (true); /* FIN_ITERAR; */
          /* { Terminación del tratto. } */
          guardarFichero(R,"salida7.2.txt");
	} /* FIN_SEGÚN; */
}











