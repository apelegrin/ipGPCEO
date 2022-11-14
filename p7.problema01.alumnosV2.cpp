#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;
#include "Secuencias.cpp"

int main(){
	/* Lexico */
	list<float> S;
	list<float>::iterator EA;
	float media, suma;
	int numeroAlumnos;
	int menores40;
	int entre40_50;
	int mayores50;
	
    /* Segundo modelo de acceso secuencial*/
    
    /* Iniciar; */
    cargarFichero(S,"entrada7.1.txt");
    EA = S.begin();
    
	/* SEGÚN EsVacía */
	/* EsVacía : */
	if (EA == S.end()){
        /* {Tratamiento sec. vacía } */
        cout << "No hay datos de entrada" << endl;
    }    
    /* NO EsVacía : */
    else {
          /* { Inic. del tratamiento } */
          media = 0.0;
          suma = 0.0;
	      numeroAlumnos = 0;
	      menores40 = 0;
	      entre40_50 = 0;
	      mayores50 = 0;
	      
          do { /* REPETIR */
          
               /* { Tratamiento de EA } */
               if (*EA < 40) {
				     menores40++;
			   }
			   else if (*EA <= 50) {
				     entre40_50++;
			   }
			   else {
				     mayores50++;
		       }
		       cout << *EA << endl;
		       numeroAlumnos++;
		       suma = suma + *EA;
			   /* Avanzar */
               EA++;
          }while (!(EA == S.end())); /* HASTA EsÚltimo; */
          /* { Terminación del tratto. } */
          cout << "Hay "<< menores40  << " menores de 40kg"   <<endl;
          cout << "Hay "<< entre40_50 << " entre 40kg y 50kg" <<endl;
          cout << "Hay "<< mayores50  << " mayores de 50kg"   <<endl;
          media = suma/numeroAlumnos;
          cout << "La media es : " << media << endl;
   } /* FIN_SEGÚN; */
}










