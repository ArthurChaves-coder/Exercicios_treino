#include<iostream>
#include<string>
#include<fstream>
using namespace std;

#include "util.h"

int main(){
    string nomeArquivo;
    string palavra;
    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;
    cin.ignore();

    //metodo para ver se o arquivo existe ou nao
    if(existeArquivo(nomeArquivo)){
        cout << "Arquivo encontrado com sucesso\n";
        cout << "digite a palavra ou frase: ";
        getline(cin,palavra);
        exibirQuantasPalavrasArquivo(palavra, nomeArquivo);
    } else {
        cout << "Arquivo nao encontrado";
    }

    return 0;
}
