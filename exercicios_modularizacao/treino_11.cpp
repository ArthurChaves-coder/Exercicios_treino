#include<iostream>
#include<string>

using namespace std;

#include "util.h"

int main(){
    int numero;

    cout << "digite um numero: ";
    cin >> numero;

    if(ehNegativo(numero)){
        cout << "o numero e negativo\n";
    } else {
        cout << "o numero e positivo\n";
    }
}