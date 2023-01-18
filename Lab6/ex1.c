#include <stdio.h>
#include <string.h>
#include <math.h>

int tempNum;

void triangular(int value) {
  double oop;
  int formula;
  oop = (int)floor(sqrt((double) value*2));
  formula = oop*(oop + 1)/2;
  if (value == formula){
    printf("%d is a triangular number\n", value);
  } else {
    printf("%d is not a triangular number\n", value);
  }
}
int main() {
  printf("Number ?\n");
  scanf("%d", &tempNum);
  while (tempNum != 0) {
    triangular(tempNum);
    printf("Number ?\n");
    scanf("%d", &tempNum);
    if (tempNum == 0) {
      break;
    }
  }
  if (tempNum == 0){
    printf("Done\n");
  }
}
