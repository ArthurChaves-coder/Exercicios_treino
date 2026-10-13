#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream arquivo("banana.txt");
    for(int i = 1; i < 6; i ++){
        arquivo << i << "\n";
    }
    arquivo.close();
}