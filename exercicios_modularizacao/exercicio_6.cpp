// fazer um programa que tenha um método que receba um nome completo e retorne o primeiro nome desse nome completo.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    string extrairPrimeiroNome(string nomeCompleto);

    string nomeCompleto;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto); 

    string apenasPrimeiro = extrairPrimeiroNome(nomeCompleto);

    cout << "O primeiro nome e: " << apenasPrimeiro << endl;

    return 0;
}
