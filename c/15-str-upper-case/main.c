//
// Created by stolen on 10/31/22.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char *str_upper_case(char *dest, const char *src) {
  char *result = dest;
  while (*src) {
    if (islower(*src)) {
      *dest = *src - ' ';
    } else {
      *dest = *src;
    }

    dest++;
    src++;
  }

  *dest = 0;

  return result;
}

int main() {
  const char *src = "Hello";

  char dest[10];
  printf("%s\n", str_upper_case(dest, src));
}
