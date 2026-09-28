void receberPalavraLetra(string palavra, char letra){
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

void receberdata(string sdia, string smes, string sano){
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
}
