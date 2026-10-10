#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    int numero;
    int resultado;

    cout << "digite um numero: ";
    cin >> numero;

    resultado = devolveSoma(numero);

    cout << "A soma dos numeros de 1 a " << numero << " e: " << resultado << endl;
}