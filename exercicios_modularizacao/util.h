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
