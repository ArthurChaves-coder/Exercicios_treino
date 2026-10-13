#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    voltaNomeIdade(nome, idade);
}

