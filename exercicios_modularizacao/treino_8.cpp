#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "util.h"

int main() {
    string nomeArquivo;
    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    if (!existeArquivo(nomeArquivo)) {
        cout << "arquivo nao existe\n";
    } else {
        cout << "arquivo existe\n";
        
        
        int total = contaMaioresQueDez(nomeArquivo);
        
        
        cout << "quantidade de numeros maiores que 10: " << total << "\n";
    } 

    return 0;
}