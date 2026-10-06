#include<iostream>
#include<string>

using namespace std;
#include "util.h"

int main(){
    string primeiroNome, ultimoNome, nomeCompleto;
    string nome;

    cout << "digite seu nome completo: ";
    getline(cin,nome);

    cout << "email: " << gerarEmail(nome) <<  "\n";

    return 0;
}
