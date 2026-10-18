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

// Devolve a soma de todos os elementos.
// Entra: o vetor | Sai: int | & so para nao copiar
int somaVetor(vector<int> &v) {
    int soma = 0;                          // acumulador comeca em 0
    for (int i = 0; i < v.size(); i++) {
        soma = soma + v[i];                // soma o ELEMENTO (v[i]), nao o indice
    }
    return soma;
}

// Devolve a media dos elementos.
// Sai: double, porque a media pode ter virgula (ex: 11.8)
double mediaVetor(vector<int> &v) {
    // (double) transforma a soma em decimal ANTES de dividir.
    // Sem isso, int / int corta a parte decimal: 7 / 2 daria 3.
    return (double) somaVetor(v) / v.size();
}

int main() {
    srand(time(NULL));                     // so UMA vez, no comeco da main

    vector<int> vetorA;
    popularVetor(vetorA, 10, 1, 20);       // chamada sem &

    cout << "Vetor A: ";
    exibirVetor(vetorA);

    // as duas funcoes DEVOLVEM um valor -> mostra direto no cout
    cout << "Soma de A: " << somaVetor(vetorA) << endl;
    cout << "Media de A: " << mediaVetor(vetorA) << endl;

    return 0;
}