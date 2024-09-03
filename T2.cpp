//Levi Silva Freitas

#include <bits/stdc++.h> //Biblioteca generalista
using namespace std;


int main() {
    string entrada;
    int resposta = 0;

    cout << "Digite uma frase da forma que desejar, ex: Me aceita, pf: ";
    getline(cin, entrada);  //Recebe a string

    //Loop que passa por cada caracter da string de entrada e contabiliza cada 'A' ou 'a' achado
    for (char c : entrada) {
        if (c == 'a' || c == 'A') {
            resposta++;
        }
    }

    if (resposta > 0) 
        cout << "A letra 'a' apareceu " << resposta << " vezes na sua frase." << endl;
    else
        cout << "A letra 'a' não aparece na sua frase." << endl;

    return 0;
}
