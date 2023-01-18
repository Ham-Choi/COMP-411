#include <stdio.h>
//oof?
int N;                    // length of pattern
char pattern[11];         // at most 10 chars plus NULL

void makepatterns(int currentlevel) {
  if(currentlevel == 0) {
    printf("%s\n", pattern);    // print a pattern
  } else {
    pattern[N-currentlevel] = '0';       // set one character to something
    makepatterns(currentlevel-1);      // recursive call
    pattern[N-currentlevel] = '1';       // set it to something else
    makepatterns(currentlevel-1);      // recursive call
  } 
}

int main() {
  scanf("%d",&N);        // read N, pattern length
  pattern[N] = '\0';      // terminate string at position N
  makepatterns(N);        // generate all patterns (recursively)
}
