    /*
    * Videoaula 14 - Estruturas
    * É uma coleção de variáveis, possivelmente de diferentes tipos, organizadas em um único conjunto
    * As variáveis que compõem uma estrutura são comumente chamadas de elementos  (ou campos)
    */

#include <stdio.h>
#include <string>
using namespace std;

// A definição permite declarar variáveis cujo tipo seja uma pessoa
struct pessoa
{
    string nome;
    int idade;
};


int main(){
    // Declarando como ponteiros as estruras
    pessoa *pai, *mae, *filho, *filha;
    pai = new pessoa;
    pai->nome = "Antonio";
    pai->idade = 58;
    mae = new pessoa;
    mae->nome = "Madalena";
    mae->idade = 55;
    filha = new pessoa;
    filha->nome = "Bianca";
    filha->idade = 21;
    filho = new pessoa;
    filho->nome = "Wilson";
    filho->idade = 19;

    printf("%X -> Pai: '%s': %d anos\n", pai, pai->nome.c_str(), pai->idade);
    printf("%X -> Mae: '%s': %d anos\n", mae, mae->nome.c_str(), mae->idade);
    printf("%X -> Filha: '%s': %d anos\n", filha, filha->nome.c_str(), filha->idade);
    printf("%X -> Filho: '%s': %d anos\n", filho, filho->nome.c_str(), filho->idade);

    return 0;
}