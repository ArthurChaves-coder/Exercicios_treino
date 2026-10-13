#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string nomeArquivo;
    cout << "Digite o nome do arquivo (ex: teste.txt): ";
    cin >> nomeArquivo;

    if(existeArquivo(nomeArquivo)){
        cout << "Conteudo do arquivo:\n";
        cout << lerArquivo(nomeArquivo);
    } else {
        cout << "Arquivo nao encontrado.\n";
    }

    return 0;
}