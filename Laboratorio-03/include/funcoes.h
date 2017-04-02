#ifndef FUNCOES_H
#define FUNCOES_H

enum Operacoes { opMaxx = 1, opMinn, opSumm, opAvgg, opHigg, opLoww};
template <typename T, typename U>

T opMax(T *vetor, U nn, T valor);
template <typename T, typename U>
T opMin(T *vetor, U nn, T valor);
template <typename T, typename U>
T opSum(T *vetor, U nn, T valor);
template <typename T, typename U>
T opAvg(T *vetor, U nn, T valor);
template <typename T, typename U>
T opHig(T *vetor, U nn, T valor);
template <typename T, typename U>
T opLow(T *vetor, U nn, T valor);
void ler_vetor(int tamanho, void *vetor);
void imprime_vetor(int nn, int *vetor);
template <typename T, typename U>
void doVector (T *vetor, int tamanho, T valor, T (*funcao) (T*, U, T));
int menu();

#endif