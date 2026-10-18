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

// Devolve quantas vezes 'valor' aparece no vetor.
// Entra: o vetor e o valor procurado | Sai: int | & so para nao copiar
int contarOcorrencias(vector<int> &v, int valor) {
    int contador = 0;                      // acumulador comeca em 0
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == valor) {
            contador++;                    // achou: soma 1 (NAO sai do laco)
        }
    }
    return contador;                       // devolve so no final, fora do laco
}

int main() {
    srand(time(NULL));                     // so UMA vez, no comeco da main

    vector<int> vetorA;
    popularVetor(vetorA, 10, 1, 5);        // qual vetor sera preenchido / quantos numeros colocar / o menor que pode sair / o maior que pode sair

    cout << "Vetor A: ";
    exibirVetor(vetorA);

    int valor;
    cout << "Digite o valor a procurar: ";
    cin >> valor;

    // a funcao DEVOLVE um int -> mostra direto no cout
    cout << "O " << valor << " aparece " << contarOcorrencias(vetorA, valor)
         << " vez(es) em A" << endl;

    return 0;
}