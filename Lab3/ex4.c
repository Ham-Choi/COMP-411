/* Example: matrices respresented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3]; //matA
  int B[3][3]; //matB
  int C[3][3]; //matC is sum
  
  printf("Please enter 9 values for matrix A:\n");

  for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
		scanf("%d", &A[i][j]);
	}
  }
  printf("Please enter 9 values for matrix B:\n");

  for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
		scanf("%d", &B[i][j]);
	}
  }

 printf("C = B + A =\n");

  for (int i = 0 ; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
		C[i][j] = A[i][j] + B[i][j];
		printf("%10d", C[i][j]);
	}
  printf("\n");
  };
}
