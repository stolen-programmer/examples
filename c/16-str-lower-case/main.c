//
// Created by stolen on 10/31/22.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char *str_lower_case(char *dest, const char *src) {
  char *result = dest;
  while (*src) {
    if (isupper(*src)) {
      *dest = *src + ' ';
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
  printf("%s\n", str_lower_case(dest, src));
}
