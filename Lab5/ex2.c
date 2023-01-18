#include<stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];

int main() {

  int number, matrickSize;

  scanf("%d", &matrickSize);
  for (int i = 0; i < matrickSize; i++) {
    for (int j = 0; j < matrickSize; j++) {
      scanf("%d", &number);
      A[i][j] = number;
    }
  }
  for (int i = 0; i < matrickSize; i++) {
    for (int j = 0; j < matrickSize; j++) {
      scanf("%d", &number);
      B[i][j] = number;
    }
  }
  for (int i = 0; i < matrickSize; i++) {
    for (int j = 0; j < matrickSize; j++) {
      for (int a = 0; a < matrickSize; a++) {
	C[i][j] += A[i][a] * B[a][j];
      }
      printf("%6d", C[i][j]);
    }
    printf("\n");
  }

 // code here
}
