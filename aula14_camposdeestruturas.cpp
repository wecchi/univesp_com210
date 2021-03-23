    /*
    * Videoaula 14 - Estruturas podem ser campos de estruturas
    * É possível anilhar estruturas dentro de estruturas
    */

#include <stdio.h>
using namespace std;

struct ponto
{
    int x = 0;
    int y = 0;
    struct ponto *p; // Estruturas podem ser autoreferenciadas (aqui teremos o endereço da memória)
};

struct retangulo
{
    struct ponto p1, p2;
    struct ponto p3, p4;
} ret;


int main(){
    // Atribuindo valores aos pontos:
    ret.p1.x = 10;      // Podemos fazer referências aninhadas
    ret.p1.y = 30;
    ret.p1.p = &ret.p1; // Informando a localização dos ponteiros
    // Ou podemos atribuir todos os parâmetros simultaneamente
    ret.p2 = {40, 30, &ret.p2};
    ret.p3 = {10, 5, &ret.p3};
    ret.p4 = {40, 5, &ret.p4};

    // Acessando os valores
    int ladoA, ladoB;
    ladoA = ret.p2.x - ret.p1.x;
    ladoB = ret.p1.y - ret.p3.y;

    printf("Perimetro do retangulo = %i\n", 2*(ladoA + ladoB));
    printf("Area do retangulo = %i\n", ladoA*ladoB);
    printf("Enderecos dos pontos: \n\t p1: %X\n\t p2: %X\n\t p3: %X\n\t p4: %X\n", ret.p1.p, ret.p2.p, ret.p3.p, ret.p4.p);

    return 0;
}