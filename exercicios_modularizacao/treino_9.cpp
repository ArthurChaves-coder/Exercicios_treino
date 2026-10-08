#include<iostream>
#include<string>

using namespace std;

#include "util.h"

int main(){
    string palavra;

    cout << "digite uma palavra: ";
    cin >> palavra;

    if(retornaSeMaiorQueCinco(palavra)){
        cout << "a palavra tem mais de 5 letras\n";
    } else {
        cout << "a palavra tem 5 ou menos letras\n";
    }
}