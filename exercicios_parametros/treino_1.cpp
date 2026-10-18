#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// Mostra todos os elementos.
// So le, entao o & serve apenas para NAO copiar o vetor.
void exibirVetor(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

// Enche o vetor com 'qtd' numeros aleatorios entre 'inicio' e 'fim'.
// PRECISA do &: se fosse copia, o vetor da main ficaria vazio.
void popularVetor(vector<int> &v, int qtd, int inicio, int fim) {
    for (int i = 0; i < qtd; i++) {
        // rand() % (fim - inicio + 1) da um numero de 0 ate (fim - inicio)
        int numero = (rand() % (fim - inicio + 1)) + inicio;
        v.push_back(numero);   // adiciona no final do vetor
    }
}

// Devolve o maior numero do vetor.
// Entra: o vetor | Sai: int | & so para nao copiar (a funcao apenas le)
int maiorValor(vector<int> &v) {
    int maior = v[0];                      // comeca assumindo que o 1o e o maior
    for (int i = 1; i < v.size(); i++) {   // comeca em 1, o 0 ja foi usado
        if (v[i] > maior) {                // achou um maior que o atual?
            maior = v[i];                  // atualiza
        }
    }
    return maior;                          // devolve so no final, fora do laco
}

int main() {
    srand(time(NULL));                     // so UMA vez, no comeco da main

    vector<int> vetorA;
    popularVetor(vetorA, 10, 1, 20);       // chamada sem &

    cout << "Vetor A: ";
    exibirVetor(vetorA);

    // a funcao DEVOLVE um int -> mostra direto no cout
    cout << "Maior de A: " << maiorValor(vetorA) << endl;

    return 0;
}