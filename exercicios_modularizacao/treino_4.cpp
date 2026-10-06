#include<iostream>
#include<string>
#include<fstream>

using namespace std;
#include "util.h"

int main() {
    string nomeArquivo;
    string linhalida;

    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    int TotalLinhas = contarLinhasArquivo(nomeArquivo);

    if (TotalLinhas == -1) {
        cout << "erro ao abrir o arquivo" << "\n";
    } else {
        cout << "o arquivo possui : " << TotalLinhas << " linhas" << "\n";
    }
}