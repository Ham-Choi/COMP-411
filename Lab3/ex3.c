/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverseText[MAX], c;
  int palindrome = 1;
  int length;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
  fgets(text, MAX, stdin);
  length = strlen(text) - 1;
  
  /* Analyse contents of text[]: */
    
  for (int i = 0; i < length; i++) {
	reverseText[i] = text[(length - 1) - i];
  }
  text[length] = '\0';
  reverseText[length] = '\0';
  
  printf("Your input in reverse is:\n");
  printf("%s\n", reverseText);

  for (int i = 0; i < length; i++) {
	if (isupper(text[i] > 0)) {
		text[i] = tolower(text[i]);
	}
	if (isupper(reverseText[i] > 0)) {
		reverseText[i] = tolower(reverseText[i]);
	}
  }
  for (int i = 0; i < length; i++) {
	if (reverseText[i] != text[i]) {
		palindrome = 0;
		break;
 	}
  }
  if (palindrome == 1) {
	printf ("Found a palindrome!\n");
  }
}
