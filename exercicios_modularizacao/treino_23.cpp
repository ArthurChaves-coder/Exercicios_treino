#include<iostream>
#include<string>
#include<cctype>

using namespace std;

#include "util.h"

int main(){
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Em maiusculo: " << converterMaiusculo(frase) << endl;
    cout << "Quantidade de palavras: " << contarPalavras(frase) << endl;

    return 0;
}