#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

void nurseryrhyme(int current) {
                       // print "current" number of spaces
  printf("%*s", current, "");
              // print something before the recursive call
  if(current == 0) {
    printf("There was an old lady who swallowed a %s;\n", animals[current]);  // you need to check if the current level is 0
  } else if (current > 0) {
    printf("She swallowed the %s to catch the %s;\n", animals[current-1], animals[current]);                 //   if so, print "There was an old lady..."
  }                 //   or if it is > 0, print "She swallowed ..."
  if(current < number-1)       // if we are not at the last animal, make the recursive call
    nurseryrhyme(current+1);                             // print something after the recursive call
}
int main() {
  int i=0;
  while (1) {
    fgets(animals[i], 15, stdin);                     // read the next animal name
    if (strcmp(animals[i], "END\n") == 0) {       // if it is "END\n", we are done reading
      break;
    }                               // determine the length of the string read
    animals[i][strlen(animals[i]) - 1] = '\0';
    fgets(lyrics[i], 60, stdin);
    lyrics[i][strlen(lyrics[i]) - 1] = '\0';                                 // strip the newline at the end
    i++;                                  // read the lyric corresponding to the animal
  }
  number = i;
  nurseryrhyme(0);
  for (int i = number - 1; i > -1; i--) {
    printf("%*s", i, ""); //even more spaces lol
    printf("I don't know why she swallowed a %s - %s\n", animals[i], lyrics[i]);
  }
}
