#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SENTENCE_LENGTH 100

int main()
{
    char *too_long_sentence;
    char *sentence;

    too_long_sentence = malloc(MAX_SENTENCE_LENGTH * __INT_MAX__ * sizeof(char)); // wyciek pamięci
    sentence = malloc(MAX_SENTENCE_LENGTH * sizeof(char));

    strcpy(too_long_sentence, "Programming in C is cool!");
    strcpy(sentence, "Programming in C is cool!");

    free(sentence);
    free(sentence); // podwójne zwolnienie

    return 0;
}

/*
#include <stdio.h>

#define MAX_SENTENCE_LENGTH 100

int main()
{
    char *sentence;

    sentence = malloc(MAX_SENTENCE_LENGTH * sizeof(char));
    strcpy(sentence, "Programming in C is cool!");

    free(sentence);

    return 0;
}
*/