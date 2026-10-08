// fazer um programa e dentro dele um método que receba o dia (string), o mês (string) e o ano (string). O método deve escrever 'DATA VÁLIDA' ou 'DATA INVÁLIDA' para a situação das variáveis passadas.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    string dia, mes, ano;

    cout << "escreva o dia: ";
    cin >> dia;

    cout << "escreva o mes: ";
    cin >> mes;

    cout << "escreva o ano: ";
    cin >> ano;

    receberdata(dia, mes, ano);
}
