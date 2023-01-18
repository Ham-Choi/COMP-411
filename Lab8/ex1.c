#include <stdio.h>

int AA[100];  		// linearized version of A[10][10]
int BB[100];  		// linearized version of B[10][10]
int CC[100];  		// linearized version of C[10][10]
int m;       		// actual size of the above matrices is mxm, where m is at most 10

int main() {
	// code here
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &AA[i*m+j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &BB[i*m+j]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      for (int a = 0; a < m; a++) {
	CC[i*m+j] += AA[i*m+a] * BB[a*m+j];
      }
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", CC[i*m+j]);
    }
    printf("\n");
  }
}
