    /*
    * Videoaula 14 - Estruturas
    * typedef: Permite compor novos tipos de dados. É composto a partir de tipos pré-existentes.
    * Não cria um novo tipo de dado
    */

#include <stdio.h>
using namespace std;

typedef float nReal;
typedef int medida;
typedef medida altura;

int main(){
    altura alt = 20;
    int x = 4, i;
    i = alt/x;
    printf("Valor de 'i': %d", i);

    return 0;
}