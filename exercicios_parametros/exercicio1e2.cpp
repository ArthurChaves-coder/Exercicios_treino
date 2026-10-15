#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void exibirVetor(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

void popularVetor(vector<int> &v, int qtd, int inicio, int fim) {
    int numero;
    for (int i = 0; i < qtd; i++) {
        numero = (rand() % (fim - inicio + 1)) + inicio;
        v.push_back(numero);
    }
}


bool existeNoVetor(vector<int> &v, int valor) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == valor) {
            return true;
        }
    }
    return false;
}


void exercicio1(vector<int> &vetorA, vector<int> &vetorB) {
    vector<int> exibidos; 

    cout << "Numeros presentes nos dois vetores: ";
    for (int i = 0; i < vetorA.size(); i++) {
        if (existeNoVetor(vetorB, vetorA[i]) && !existeNoVetor(exibidos, vetorA[i])) {
            cout << vetorA[i] << "\t";
            exibidos.push_back(vetorA[i]);
        }
    }
    cout << endl;
}


vector<int> exercicio2(vector<int> &vetorA, vector<int> &vetorB, vector<int> &vetorResultado) {
    for (int i = 0; i < vetorA.size(); i++) {
        if (existeNoVetor(vetorB, vetorA[i]) && !existeNoVetor(vetorResultado, vetorA[i])) {
            vetorResultado.push_back(vetorA[i]);
        }
    }
    return vetorResultado;
}

int main() {
    srand(time(NULL));

    vector<int> vetorA;
    vector<int> vetorB;
    vector<int> vetorResultado;

    int n = 10;

    
    popularVetor(vetorA, n, 1, 20);
    popularVetor(vetorB, n, 1, 20);

    cout << "Vetor A: ";
    exibirVetor(vetorA);
    cout << "Vetor B: ";
    exibirVetor(vetorB);

    cout << "\nExercicio 1" << endl;
    exercicio1(vetorA, vetorB);

    cout << "\nExercicio 2" << endl;
    vector<int> resultado = exercicio2(vetorA, vetorB, vetorResultado);
    cout << "Vetor resultado: ";
    exibirVetor(resultado);

    return 0;
}
