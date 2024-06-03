typedef struct Vector {
  int *vetor;
  int tamanho;
  int elementos;
} Vetor;

Vector *createVector(int size);
void destroyVector(Vetor *vector);
void addElement(Vetor *vector, int element);
void removeElement(Vetor *vector, int position);
void displayVector(Vetor *vector);
void displayElement(Vetor *vector, int position);