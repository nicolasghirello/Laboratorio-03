#include <iostream>

using namespace std;

int nn, ii;
int x = 0, kk, y = 100, sum = 0, media = 0, i, hig = 0, low = 0; // na tarefa 3 kkkk = nn + 1 NÃO ESQUECER CARALHO
enum Operacoes { opMaxx = 1, opMinn, opSumm, opAvgg, opHigg, opLoww};

template <typename T, typename U>
T opMax(T *vetor, U nn, T valor){
	if (kk < nn){
		if (x < vetor[kk]){
			x = vetor[kk];
		}
		
		kk++;
		opMax(vetor, nn, 0);
	}
	kk=0;
	return x;
}
template <typename T, typename U>
T opMin(T *vetor, U nn, T valor){
	if (kk < nn){
		if (y > vetor[kk]){
			y = vetor[kk];
		}
		kk++;
		opMin(vetor, nn, 0);
	}
	kk=0;
	return y;
}
template <typename T, typename U>
T opSum(T *vetor, U nn, T valor){
	if (kk < nn){
		sum += vetor[kk];
		kk++;
		opSum(vetor, nn, 0);
	}
	kk=0;
	return sum;
}
template <typename T, typename U>
T opAvg(T *vetor, U nn, T valor){
	if (kk < nn){
		media += vetor[kk];
		kk++;
		opAvg(vetor, nn, 0);
	}
	kk=0;
	return (media/nn);
}
template <typename T, typename U>
T opHig(T *vetor, U nn, T valor){
	if (kk < nn){
		if (valor < vetor[kk]){
		hig++;
		}
		kk++;
		opHig(vetor, nn, valor);
	}
	kk=0;
	return hig;
}
template <typename T, typename U>
T opLow(T *vetor, U nn, T valor){
	if (kk < nn){
		if (valor > vetor[kk]){
		low++;
		}
		kk++;
		opLow(vetor, nn, valor);
	}
	kk=0;
	return low;
}
void ler_vetor(int nn,void *vetor){
	if (i < nn){
		cout << "digita o numero " << i << endl;
		//cin >> vetor[i];
		i++;
		ler_vetor(nn, vetor);
	}
}
void imprime_vetor(int nn, int *vetor){
	if (ii < nn){
		cout << vetor[ii] << ", ";
		ii++;
		imprime_vetor(nn, vetor);
	}
}
int menu(){
	int opcao;
	cout << "(1)Maior valor" << endl;
	cout << "(2)Menor valor" << endl;
	cout << "(3)Soma dos elementos" << endl;
	cout << "(4)Media dos elementos" << endl;
	cout << "(5)Elementos maiores que um valor" << endl;
	cout << "(6)Elementos menores que um valor" << endl;
	cout << "(0) Sair" << endl << endl;
	cout << "Digite sua opcao: ";
	cin >> opcao;
	return opcao;
}
template <typename T, typename U>
void doVector (T vetor, int tamanho, T valor, T (*funcao) (T*, U, T)){
	cout << funcao(vetor, tamanho, valor) << endl;
}


