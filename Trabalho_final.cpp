#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
 
using namespace std;
 
struct Carta {
    string nome;
    string colecao;
    string estado;
    double preco;
};
 
bool inserir(vector<Carta>& cartas) {
    string nome, colecao, estado;
    double preco;
 
    cout << "Digite o nome da carta: ";
    getline(cin, nome);
 
    if (nome == "") {
        cout << "O nome nao pode ser vazio.\n";
        return false;
    }
 
    cout << "Digite a colecao: ";
    getline(cin, colecao);
 
    if (colecao == "") {
        cout << "A colecao nao pode ser vazia.\n";
        return false;
    }
 
    bool encontrado = false;
    for (int i = 0; i < cartas.size(); i++) {
        if (nome == cartas[i].nome && colecao == cartas[i].colecao) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "Carta ja cadastrada nessa colecao.\n";
        return false;
    }
 
    cout << "Digite o estado de conservacao: ";
    getline(cin, estado);
 
    if (estado == "") {
        cout << "O estado nao pode ser vazio.\n";
        return false;
    }
 
    cout << "Digite o preco atual: ";
    if (!(cin >> preco) || preco < 0) {
        cin.clear();
        cin.ignore();
        cout << "Preco invalido.\n";
        return false;
    }
    cin.ignore();

 
    cartas.push_back({nome, colecao, estado, preco});
    cout << "Carta inserida com sucesso.\n";
    return true;
}
 
void listar(vector<Carta> cartas) {
    if (cartas.size() == 0) {
        cout << "Nenhuma carta cadastrada.\n";
        return;
    }
 
    cout << "\nCartas cadastradas:\n";
    for (int i = 0; i < cartas.size(); i++) {
        cout << i + 1 << " - " << cartas[i].nome
             << " | Colecao: " << cartas[i].colecao
             << " | Estado: " << cartas[i].estado
             << " | Preco: R$ " << cartas[i].preco << "\n";
    }
}
 
void pesquisar(vector<Carta> cartas) {
    string nome;
 
    cout << "Digite o nome da carta que deseja pesquisar: ";
    getline(cin, nome);
 
    bool encontrado = false;
    for (int i = 0; i < cartas.size(); i++) {
        if (nome == cartas[i].nome) {
            cout << cartas[i].nome
                 << " | Colecao: " << cartas[i].colecao
                 << " | Estado: " << cartas[i].estado
                 << " | Preco: R$ " << cartas[i].preco << "\n";
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Carta nao encontrada.\n";
    }
}
 
bool remover(vector<Carta>& cartas) {
    string nome, colecao;
 
    cout << "Digite o nome da carta que deseja remover: ";
    getline(cin, nome);
    cout << "Digite a colecao da carta: ";
    getline(cin, colecao);
 
    for (int i = 0; i < cartas.size(); i++) {
        if (nome == cartas[i].nome && colecao == cartas[i].colecao) {
            cartas.erase(cartas.begin() + i);
            cout << "Carta removida com sucesso.\n";
            return true;
        }
    }
 
    cout << "Carta nao encontrada.\n";
    return false;
}
 

void carregarBase(string nomeBase, vector<Carta>& cartas) {
    ifstream arquivo;
    arquivo.open(nomeBase);
 
    if (!arquivo) {
        return;
    }
 
    string nome, colecao, estado;
    double preco;
    while (!arquivo.eof()) {
        getline(arquivo, nome);
        getline(arquivo, colecao);
        getline(arquivo, estado);
        arquivo >> preco;
        arquivo.ignore(numeric_limits<streamsize>::max(), '\n');
 
        if (nome != "") {
            cartas.push_back({nome, colecao, estado, preco});
        }
    }
    arquivo.close();
}
 
void atualizarBase(vector<Carta> cartas, string nomeBase) {
    ofstream arquivo;
    arquivo.open(nomeBase);
 
    for (int i = 0; i < cartas.size(); i++) {
        arquivo << cartas[i].nome << endl;
        arquivo << cartas[i].colecao << endl;
        arquivo << cartas[i].estado << endl;
        arquivo << cartas[i].preco << endl;
    }
 
    arquivo.close();
}
 
void ordenar(vector<Carta>& cartas) {
    
    Carta tmp;
    bool houveTroca;
    int tamanho = cartas.size();
    do {
        houveTroca = false;
        for (int i = 0; i < tamanho - 1; i++) {
            if (cartas[i].nome > cartas[i+1].nome) {
                houveTroca = true;
                tmp = cartas[i];
                cartas[i] = cartas[i+1];
                cartas[i+1] = tmp;
            }
        }
    } while (houveTroca);
}
 
int main() {
    vector<Carta> cartas;
    int opcao;
    string nomeBase = "cartas.txt";
 
    
    carregarBase(nomeBase, cartas);
 
    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir carta\n";
        cout << "2 - Listar cartas\n";
        cout << "3 - Pesquisar carta\n";
        cout << "4 - Remover carta\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        if (!(cin >> opcao)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite um numero entre 1 e 5.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
        switch (opcao) {
            case 1:
                if (inserir(cartas)) {
                    
                    ordenar(cartas);
                    
                    atualizarBase(cartas, nomeBase);
                }
                break;
            case 2:
                listar(cartas);
                break;
            case 3:
                pesquisar(cartas);
                break;
            case 4:
                if (remover(cartas)) {
                    atualizarBase(cartas, nomeBase);
                }
                break;
            case 5:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);
 
    return 0;
}
