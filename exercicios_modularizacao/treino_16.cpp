#include<iostream>
#include<string>
#include<fstream>

using namespace std;

#include "util.h"

int main(){
    string palavra;
    char letra;

    cout << "digite a palavra: ";
    cin >> palavra;

    cout << "digite a letra: ";
    cin >> letra;

    if(apareceNaPalavra(palavra, letra)){
        cout << "A letra '" << letra << "' aparece na palavra \"" << palavra << "\"." << endl;
    } else {
        cout << "A letra '" << letra << "' nao aparece na palavra \"" << palavra << "\"." << endl;
    }
}