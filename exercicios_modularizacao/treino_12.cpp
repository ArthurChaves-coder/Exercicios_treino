#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string nomeArquivo;

    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    int resultado = contarNumerosArquivo(nomeArquivo);
    if(resultado == -1){
        cout << "o arquivo nao existe\n";
    } else {
        cout << "o arquivo tem " << resultado << " numeros\n";
    }
}