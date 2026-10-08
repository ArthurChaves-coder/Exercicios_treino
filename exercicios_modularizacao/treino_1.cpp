#include<iostream>
#include<string>

using namespace std;
#include "util.h"

int main(){
    int numero;
    cout << "digite um numero: ";
    cin >> numero;

    if(ehPar(numero)) { // if (true), por isso primeiro roda o true, depois o false
        cout << "o numero digitado e par" << "\n"; // se a condição for true, executa o primeiro bloco de código
    } else {
        cout << "o numero digitado e impar" << "\n"; // se a condição for false, executa o segundo bloco de código
    }
    
}


