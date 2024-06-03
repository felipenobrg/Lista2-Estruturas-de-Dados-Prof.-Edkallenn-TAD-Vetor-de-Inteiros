/*
** Função: TAD Vetor de Inteiros
** Autor: Felipe Nóbrega de Almeida
** Data: 02/06/2024
** Observações:
*/

#include <locale.h>
#include "vetor/vetor.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    Vetor *vector = createVector(5);
    addElement(vector, 10);
    displayVector(vector);
    addElement(vector, 20);
    displayVector(vector);
    addElement(vector, 30);
    displayVector(vector);
    addElement(vector, 40);
    displayVector(vector);
    addElement(vector, 50);
    displayVector(vector);

    removeElement(vector, 2);
    displayVector(vector);
    removeElement(vector, 0);
    displayVector(vector);

    displayElement(vector, 2);

    destroyVector(vector);

    return 0;
}
