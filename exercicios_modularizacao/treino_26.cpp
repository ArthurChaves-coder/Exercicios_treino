#include<iostream>
#include<string>
#include<fstream>
#include<cctype>

using namespace std;

#include "util.h"

int main(){
    string nomeArquivo;
    cout << "Digite o nome do arquivo (ex: teste.txt): ";
    cin >> nomeArquivo;

    if(arquivoExiste(nomeArquivo)){
        cout << "Em maiusculo:\n";
        cout << maiusculoArquivo(nomeArquivo);

        cout << "Quantidade de palavras: " << contarPalavrasArquivo(nomeArquivo) << endl;
    } else {
        cout << "Arquivo nao encontrado.\n";
    }

    return 0;
}