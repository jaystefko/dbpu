#include <stdio.h>
#include <math.h>

#define MAX_STRING_LENGTH 100

int main () {
   char input[MAX_STRING_LENGTH], output[MAX_STRING_LENGTH + 10];

   printf("Podaj string: ");
   scanf("%s", input);

   sprintf(output, "podano: %s", input);
   puts(output);
   
   return 0;
}