#include<iostream>
#include<string>
#include<fstream>

using namespace std;
#include "util.h"

int main(){
    string nomeArquivo;
    string buscaPalavra;

    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    if(!existeArquivo(nomeArquivo)){
        cout << "arquivo nao existe\n";
    } else{
        cout << "arquivo existe\n";
    }

    cout << "digite qual palavra quer buscar no arquivo :\n";
    cin >> buscaPalavra;

    cout << vezesPalavra;
}