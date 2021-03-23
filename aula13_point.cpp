    /*
    * Videoaula 13 - Ponteiro, endereço e memória
    * Ponteiro é uma variável que contém um endereço de memória, que é a posição de outra variável na memória
    * Dizemos que um ponteiro “aponta” para uma variável. São usados para alocar memória dinamicamente
    * Pode aumentar a eficiência de certas rotinas
    * Ponteiros fornecem meios para funções modificarem seus argumentos
    * 
    * Tecnicamente, qualquer ponteiro pode apontar para qualquer posição de memória, porém o tipo do ponteiro 
    * pode ser importante; por exemplo, em aritmética de ponteiros não se deve apontar para um tipo diferente
    */

#include <iostream>
#include <stdlib.h>

using namespace std;

// Declaração de ponteiro
int main (){
    int *pInt; char *pChar; float *pFloat1, *pFloat2;

    int acm1 = 35; float acm2 = 4789.025778;
    system("cls");

    // &: operador unário. Devolve o endereço de memória do seu operando. Seu uso mais comum é durante inicializações de ponteiros
    // Exemplo do operador unário "&"
    pInt = &acm1;    // recebe “o endereço de” acm 

    cout << "Valor do ponteiro pInt: " << pInt << ", entretando seu conteudo: " << acm1 << endl;

    // Outro modo de inicializar o ponteiro:
    pChar = 0;
    pFloat1 = NULL; // equivalente a pFloat1 = 0

    // *: operador unário. Devolve o valor da variável apontada (o conteúdo do apontador)
    pFloat1 = &acm2;
    cout << "Valor do ponteiro pFloat1: " << pFloat1 << ", entretando seu conteudo: " << *pFloat1 << endl << endl;

    // Exemplo de erro no apontamento:
    // pInt = &acm2;   // o ponteiro do tipo "int" está apontando para uma variável "float"

    cout << "\n---------- OPERACAO DE ATRIBUICAO ----------" << endl;
    acm2 *= -0.719; // atribuindo um novo valor ao float (ele mesmo vezes -0.719)
    pFloat2 = &acm2;
    pFloat1 = pFloat2;
    printf("Endereco de pFloat1: %X e valor  %f \n", pFloat1, *pFloat1);
    printf("Endereco de pFloat2: %X e valor  %f \n", pFloat2, *pFloat2);

    cout << "\n---------- ARITMETICA DE PONTEIROS ----------" << endl;
    /* 2 operações apenas: adição e subtração
     * Cada incremento (ou decremento) caminha para frente (ou retrocede) o ponteiro na quantidade de bytes 
     * correspondente ao tipo base (incrementa o endereço do ponteiro)
     */
    float acm3 = 808.978101; int acm4 = 752;
    printf("Endereco de pFloat1: %X e valor  %f \n", pFloat1, *pFloat1);
    pFloat1++;
    printf("Endereco de pFloat1++: %X e valor  %f \n", pFloat1, *pFloat1);

    printf("\nEndereco de pInt: %X e valor  %i \n", pInt, *pInt);
    pInt--;
    printf("Endereco de pInt--: %X e valor  %i \n", pInt, *pInt);

    int *p, num=1, num2;
    p = &num;
    num = *p+1; // incrementa em uma unidade o valor do ponteiro "p" que era originalmente 1
    num2 = *&num;
    printf("\nEndereco de num %X e valor %i \n", &num, num);
    printf("Endereco de num2 %X e valor %i \n", &num2, num2);

    cout << "\n---------- COMPARACAO DE PONTEIROS ----------" << endl;
    /* Comparação entre ponteiros é possível
     * compara-se as posições de memória, exemplo:
     */
    if (pFloat1 == pFloat2){
        cout << ">>> ponteiros pFloat1 e pFloat2 iguais" << endl;
    } else {
        cout << ">>> ponteiros pFloat1 e pFloat2 diferentes" << endl;
    }
    if (pChar == 0){
        cout << ">>> o ponteiro pChar nao inicializado" << endl;
    }

    return 0;
}