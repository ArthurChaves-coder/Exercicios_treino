// fazer um programa que tenha um método que receba um nome completo e retorne o primeiro nome desse nome completo.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    string nomeCompleto;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto); 

   
    cout << "O primeiro nome e: " << extrairPrimeiroNome(nomeCompleto) << endl;

    return 0;
}
