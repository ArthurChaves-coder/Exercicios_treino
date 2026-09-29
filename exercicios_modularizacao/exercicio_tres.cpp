// fazer um programa que tenha um método que receba uma frase e retorne a quantidade de vogais presentes na frase.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

#include "util.h"

int main(){
    string frase;

    cout << "digite uma frase: ";
    getline(cin,frase);

    int totalVogais = contarVogais(frase);

    cout << "A frase contem " << totalVogais << " vogais.";
}
