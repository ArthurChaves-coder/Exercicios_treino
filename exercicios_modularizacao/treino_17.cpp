#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    int numero;
    cout << "digite um numero: ";
    cin >> numero;

    gravaSequencia(numero);

    cout << "gravado!\n";
}