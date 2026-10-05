#include<iostream>
#include<string>

using namespace std;
#include "util.h"

int main(){
    string CPF;

    cout << "digite um CPF ate 11 numeros: ";
    cin >> CPF;

    if(validarCPF(CPF)) {
        cout << "CPF valido" << "\n";
    } else {
        cout << "CPF invalido"; 
    }

    return 0;
}
