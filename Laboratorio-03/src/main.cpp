/**
 * @file	main.cpp
 * @brief	Arquivo principal do programa que realiza operacoes sobre um vetor
 *			de diferentes tipos de dados
 * @author	Everton Cavalcante (everton@dimap.ufrn.br)
 * @author  Silvio Sampaio (silviocs@imd.ufrn.br)
 * @since	28/03/2017
 * @date	30/03/2017
 */

#include <iostream>
#include <string>
#include "funcoes.h"

using namespace std;
	
/** @brief Funcao principal */
template <typename T, typename U>
T (*ponteiroFuncao) (T*, U, T);

int* vint = NULL;			// Vetor de inteiros
float* vfloat = NULL;		// Vetor de decimais (float)
double* vdouble = NULL;		// Vetor de decimais (double)


int main(){
	int valor;

	string tipo_dados;				// Tipo de dados (int, float, double,
	cout << "Tipo de dados: ";
	cin >> tipo_dados;
	
	int tamanho;
	cout << "Informe a quantidade de elementos: ";
	cin >> tamanho;

	// Alocacao, preenchimento e impressao do vetor de acordo com o tipo
	if (tipo_dados == "int"){
		// Alocar dinamicamente o vetor de inteiros
		vint = new int[tamanho];

		// Preencher o vetor chamando funcao genérica
		ler_vetor(tamanho, vint); 

		// Imprimir o vetor chamando funcao genérica
		cout << "Vetor: [";
		imprime_vetor(tamanho, vint);
		cout << "]" << endl;
	}
	else if(tipo_dados == "float") {

	}
	else if(tipo_dados == "double"){

	}
	else if(tipo_dados == "string"){

	}else{
		return main();
	}


	while(1){
	   	switch(menu()){
	   		valor = 0;
			case 1:
				ponteiroFuncao = opMax(T, U, T);
				cout << "Maior valor no vetor: ";
				break;

			case 2:			
				ponteiroFuncao = opMin;
				cout << "Menor valor no vetor: ";
				break;

			case 3:
				ponteiroFuncao = opSum;
				cout << "Soma dos elementos do vetor: ";
				break;

			case 4:
				ponteiroFuncao = opAvg;
				cout << "Media dos elementos do vetor: ";
				break;

			case 5:
				ponteiroFuncao = opHig;
				cout << "Informe o valor limite: " << endl;
				cin >> valor;
				cout << "Quantidade de elementos maiores que "<< valor << ": ";
				break;

			case 6:
				cout << "Informe o valor base: " << endl;
				cin >> valor;
				ponteiroFuncao = opLow;
				cout << "Quantidade de elementos menores que "<< valor << ": ";
				break;

			case 0:
				return 0;
		}
	   	doVector(vint, tamanho, valor, ponteiroFuncao);   	
	}
	
	delete[] vint;
}


















