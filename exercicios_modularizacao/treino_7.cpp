#include<iostream>
#include<fstream>
#include<string>

using namespace std;
#include "util.h"

int main() {
    string frase;

    cout << "digite uma frase: ";
    getline(cin,frase);

    cout << converter_para_maiusculo(frase) << "\n";

    cout << retornaPalavras(frase) << "\n";
}
