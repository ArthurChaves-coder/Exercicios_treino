#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string nomeArquivo;
    char letra;

    cout << "Digite o nome do arquivo (ex: teste.txt): ";
    cin >> nomeArquivo;

    cout << "Digite a letra de pesquisa: ";
    cin >> letra;

    if(arquivoExiste(nomeArquivo)){
        cout << "Resultado:\n";
        cout << substituirLetraArquivo(nomeArquivo, letra);
    } else {
        cout << "Arquivo nao encontrado.\n";
    }

    return 0;
}