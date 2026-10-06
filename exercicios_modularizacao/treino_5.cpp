#include<iostream>
#include<string>
#include<fstream>
using namespace std;

#include "util.h"

int main() {
    string nomeArquivo;
    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    if(existeArquivo(nomeArquivo)) {
        cout << "O arquivo existe." << "\n";
    } else {
        cout << "O arquivo nao existe." << "\n";
    }

    int somaNumeros = somarNumerosArquivo(nomeArquivo);
    if(somaNumeros == -1) {
        cout << "erro ao abrir o arquivo" << "\n";
    } else {
        cout << "a soma dos numeros do arquivo e: " << somaNumeros << "\n";
    }
    
}