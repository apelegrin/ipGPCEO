#include <iostream>
using namespace std;

#define TAM_HISTO 'Z' - 'A' + 1
#define elemHisto(h,c) h[(c) - 'A']



int main() {
	
	int frecLetras[TAM_HISTO];	
	
	elemHisto(frecLetras,'a') = 8;
	cout << elemHisto(frecLetras,'a') ;
	
}







