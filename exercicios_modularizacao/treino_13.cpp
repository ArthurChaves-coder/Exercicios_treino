#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    int numero;
    
    cout << "digite um numero: ";
    cin >> numero;

    cout << "o quadrado do numero e: " << retornaQuadrado(numero) << endl;
}