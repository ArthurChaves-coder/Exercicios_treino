// fazer um programa que tenha um método que receba um vetor de números inteiros, o tamanho desse vetor e retorne true se o vetor estiver ordenado ou false se o vetor estiver desordenado.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    int vetor[100];
    int tamanho;

    cout << "digite o tamanho do vetor, no maximo ate 100: ";
    cin >> tamanho;

    cout << "digite os numeros do vetor: \n";
    for(int i = 0; i < tamanho; i ++){
        cout << "elemento: " << i << "\n";
        cin >> vetor[i];
    }

    if (estaOrdenado(vetor, tamanho)) {
        cout << "O vetor esta ORDENADO!" << "\n";
    } else {
        cout << "O vetor esta DESORDENADO!" << "\n";
    }

    return 0;
}
