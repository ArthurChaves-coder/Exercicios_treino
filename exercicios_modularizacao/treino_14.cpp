#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string nome;

    cout << "digite o seu nome: ";
    cin >> nome;

    saudacao(nome);
}