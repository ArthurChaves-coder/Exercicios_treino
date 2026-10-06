#include<iostream>
#include<string>

using namespace std;
#include "util.h"

int main() {
    string texto;
    cout << "digite um texto: ";
    getline(cin, texto);

    int quantidadeCaracteres = contarCaracteres(texto);

    cout << "o texto possui : " << quantidadeCaracteres << "\n";
}