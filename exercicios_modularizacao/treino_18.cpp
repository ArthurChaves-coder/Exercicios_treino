#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream arquivo("banana.txt");
    arquivo << "ola mundo\n";
    arquivo << "estou aprendendo a gravar em arquivos\n";
    arquivo.close();

    cout << "gravado!\n";
} // criou um novo arquivo e escreveu a frase acima;