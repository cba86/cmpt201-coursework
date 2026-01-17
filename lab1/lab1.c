#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char *ptr = NULL;
  size_t size = 0;

  printf("Please enter some text: ");
  // getline(char **lineptr, size_t *n, FILE *stream);
  // lineprt = variable storing inserted string | n = size of string | stream =
  // input
  if (getline(&ptr, &size, stdin) != -1) {
    printf("Tokens:\n");

    char *token = NULL;
    char *strptr = ptr;
    char *strleftoff = NULL;

    // strtok_r(char *str, const char *delim, char **saveptr);
    // str = str to cut | delim = delimiter (split points) | saveptr = bookmark
    while ((token = strtok_r(strptr, " ", &strleftoff))) {
      printf("%s\n", token);
      strptr = NULL;
    }
  }

  else {
    printf("Sorry, invalid string. Please try again.");
  }

  return 0;
}
