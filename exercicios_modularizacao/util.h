void receberPalavraLetra(string palavra, char letra){ // nao retorna
    cout << "digite a palavra: ";
    cin >> palavra;

    cout << "digite a letra: ";
    cin >> letra;

    int contador = 0;
    for (int i=0; i < palavra.size(); i++){
        if(palavra[i] == letra){
            contador++;
        }
    }

    cout << "A letra '" << letra << "' aparece " << contador << " vez(es) na palavra \"" << palavra << "\".\n";
}

void receberdata(string sdia, string smes, string sano){ // nao retorna
    cout << "escreva o dia: ";
    cin >> sdia;

    cout << "escreva o mes: ";
    cin >> smes;

    cout << "escreva o ano: ";
    cin >> sano;

    int dia = stoi(sdia);
    int mes = stoi(smes);
    int ano = stoi(sano);

    if(dia == 31 && (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        cout << "data invalida";
    } else if (dia >= 29 && mes == 2) {
        cout << "Data invalida" << endl;
    } else {
        cout << "Data valida" << endl;
    }


string extrairPrimeiroNome(string nomeCompleto) {
    string primeiroNome = "";

    for (int i = 0; i < nomeCompleto.size(); i++) {
        if (nomeCompleto[i] == ' ') {
            break; 
        }
        primeiroNome += nomeCompleto[i];
    }

    return primeiroNome;
}
}


int contarVogais(string frase){ // retorna para o codigo
    int contador = 0;

    for(int i = 0; i < frase.size(); i++){
        if (frase[i] == 'a' || frase[i] == 'A') {
            contador++;
        }
        else if (frase[i] == 'e' || frase[i] == 'E') {
            contador++;
        }
        else if (frase[i] == 'i' || frase[i] == 'I') {
            contador++;
        }
        else if (frase[i] == 'o' || frase[i] == 'O') {
            contador++;
        }
        else if (frase[i] == 'u' || frase[i] == 'U') {
            contador++;
        }
    }


string converter_para_maiusculo(string frase){
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }   
    
    return frase;
}

    return contador;
}

bool estaOrdenado(int vetor[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        if (vetor[i] > vetor[i + 1]) {
            return false; 
        }
    }
    return true;
}

bool existeArquivo(string nomeArquivo) { 
    ifstream arquivo;
    arquivo.open(nomeArquivo);
    if(!arquivo) { // se arquivo nao existe, retorna falso
        return false;
    }
    arquivo.close();
    return true;
}

void exibirQuantasPalavrasArquivo(string palavra, string nomeArquivo) {
    ifstream arquivo;
    int contador = 0;
    string palavraAtual;
    arquivo.open(nomeArquivo);

    while (arquivo >> palavraAtual) {
        if (palavraAtual == palavra) {
            contador++;
        }
    }
    cout << "Quantidade de " << palavra << " localizadas no arquivo: " << contador << endl;

    arquivo.close();
}



bool validarCPF(string CPF){
    return CPF.length() == 11;
}

bool retorneData(string data) {
    if (data.length() != 8) {
        return false;
    } else {
        return true;
    }
}

string gerarEmail(string nomeCompleto) {
    string primeiroNome;
    string ultimoNome;

    int posicaoEspaco = nomeCompleto.find(' ');
    primeiroNome = nomeCompleto.substr(0, posicaoEspaco);

    int ultimoEspaco = nomeCompleto.find_last_of(' ');
    ultimoNome = nomeCompleto.substr(ultimoEspaco + 1);

    return primeiroNome + "." + ultimoNome + "@ufn.edu.br";
}
