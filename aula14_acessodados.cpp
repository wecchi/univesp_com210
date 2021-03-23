    /*
    * Videoaula 14 - Atribuição e acesso a dados
    * Quando não declarado como ponteiros, as estruturas podem ser 
    * acessadas pelo endereço de memória usando o operador '&'
    */

#include <stdio.h>
using namespace std;

struct S
{
    int x;      
    char y = 'S'; // É possível atribuir um valor incial aos dados da estrutura
} a, b;

// inicializando valores para a variável 'd' com os valores entre chaves
struct S c, d = {50, 'D'};

int main(){
    a.x = 15;   // Alterando valor da estrutura 'a'
    b = a;
    b.x--;      // Alterando o valor de b.x (decrementando em uma unidade)
    b.y = 'B';  // Atribuindo o caracter 'b' à estrutura 'b'
    c = d;
    c.x++;      // Alterando o valor de c.x (incrementando em uma unidade)
    d.x += 29;  // Alterando o valor de d.x (acrescentando 29 ao valor original)   
    // Acesso aos dados da estrurura:
    printf("%x: a.x = %i | a.y = '%c'\n", &a, a.x, a.y);
    printf("%x: b.x = %i | b.y = '%c'\n", &b, b.x, b.y);
    printf("%x: c.x = %i | c.y = '%c'\n", &c, c.x, c.y);
    printf("%x: d.x = %i | d.y = '%c'\n", &d, d.x, d.y);
}
