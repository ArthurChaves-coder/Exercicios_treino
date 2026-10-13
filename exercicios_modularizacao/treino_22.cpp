#include<iostream>
#include<string>
#include<istream>

using namespace std;

#include "util.h"

int main(){
    int numero;
    int soma;

    cout << "digite um numero: ";
    cin >> numero;

    int resultado = escreveNumero2(numero);
    cout << "a soma e: " << resultado << "\n";
}