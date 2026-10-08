#include<iostream>
#include<string>

using namespace std;

#include "util.h"

int main(){
    string palavra;
    char primeiraLetra;

    cout << "digite uma palavra: ";
    cin >> palavra;

    cout << "a primeira letra e : " << PrimeiraLetra_(palavra) << "\n";
}