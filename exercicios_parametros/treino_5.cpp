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
        int numero = (rand() % (fim - inicio + 1)) + inicio;
        v.push_back(numero);   // adiciona no final do vetor
    }
}

// Separa os elementos de 'v' em dois vetores: pares e impares.
// & em 'v': so para nao copiar (a funcao apenas le).
// & em 'pares' e 'impares': PRECISA nos dois, porque a funcao ENCHE os dois.
// Por que nao usar return? Porque return so devolve UMA coisa, e aqui sao DUAS.
// E void porque os resultados saem pelo &.
void separarParesImpares(vector<int> &v, vector<int> &pares, vector<int> &impares) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {               // resto da divisao por 2 igual a 0 -> par
            pares.push_back(v[i]);         // vai para o vetor dos pares
        } else {
            impares.push_back(v[i]);       // senao, vai para o vetor dos impares
        }
    }
}

int main() {
    srand(time(NULL));                     // so UMA vez, no comeco da main

    vector<int> vetorA;
    popularVetor(vetorA, 10, 1, 20);       // chamada sem &

    cout << "Vetor A: ";
    exibirVetor(vetorA);

    // Os dois vetores de saida precisam EXISTIR antes, vazios.
    vector<int> pares;
    vector<int> impares;

    // Chamada sozinha numa linha (a funcao e void), sem &.
    separarParesImpares(vetorA, pares, impares);

    cout << "Pares de A: ";
    exibirVetor(pares);
    cout << "Impares de A: ";
    exibirVetor(impares);

    return 0;
}