// fazer um programa que tenha um método que receba uma frase e retorne essa frase totalmente em maiúscula.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Frase em maiuscula: " << converter_para_maiusculo(frase)<< endl;

    return 0;
}
