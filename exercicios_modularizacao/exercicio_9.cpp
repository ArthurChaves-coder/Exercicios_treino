#include<iostream>
#include<string>

using namespace std;
#include "util.h"


int main(){
    string data;

    cout << "digite uma data: ";
    cin >> data;

    if(retorneData(data)){
        cout << "data valida!\n";
    } else {
        cout << "data invalida!\n";
    }

    return 0;
}
