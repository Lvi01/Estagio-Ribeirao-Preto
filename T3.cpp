//Levi Silva Freitas

//A resposta é 77.
//Aproveitei e fiz um codigo para comprovar que minha resposta esta certa:

#include <bits/stdc++.h> //Biblioteca generalista
using namespace std;

int main() {
    int indice = 12, soma = 0, k = 1;

    while(k < indice)
    {
        k += 1;
        soma += k;
    }
    
    cout << soma << endl;

    return 0;
}
