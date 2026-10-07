#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string frase;
    char caractere;

    cout << "digite uma frase: ";
    getline(cin,frase);

    cout << "digite um caractere: ";
    cin >> caractere;

   cout << retornaFrase(frase, caractere);
}
