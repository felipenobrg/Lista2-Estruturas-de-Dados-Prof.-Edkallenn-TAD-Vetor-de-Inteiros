#include <stdlib.h>
#include <stdio.h>
#include "vetor.h"

Vetor *createVector(int size) {
    Vetor *vector = (Vetor *)malloc(sizeof(Vetor));
    vector->vector = (int *)malloc(size * sizeof(int));
    vector->size = size;
    vector->elements = 0;
    return vector;
}

void destroyVector(Vetor *vector) {
    free(vector->vector);
    free(vector);
}

void addElement(Vetor *vector, int element) {
    if (vector->elements < vector->size) {
        vector->vector[vector->elements] = element;
        vector->elements++;
    }
}

void removeElement(Vetor *vector, int position) {
    if (position >= 0 && position < vector->elements) {
        for (int i = position; i < vector->elements - 1; i++) {
            vector->vector[i] = vector->vector[i + 1];
        }
        vector->elements--;
    }
}

void displayVector(Vetor *vector) {
    printf("Vector: [ ");
    for (int i = 0; i < vector->elements; i++) {
        printf("%d ", vector->vector[i]);
    }
    printf("]\n");
}

void displayElement(Vetor *vector, int position) {
    if (position >= 0 && position < vector->elements) {
        printf("Elemento %d: %d\n", position, vector->vector[position]);
    }
}
