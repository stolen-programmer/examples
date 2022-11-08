//
// Created by stolen on 10/31/22.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

const char *skip(const char *src, int (*filter)(int)) {
  while (filter(*src)) {
    src++;
  }
  
  return src;
}

char *str_trim(const char *src, char *dest) {
  char *_dest = dest;
  
  src = skip(src, isspace);

  while (*src) {
    *dest = *src;
    src++;
    dest++;
  }

  while (isspace(*(dest - 1))) {
    dest--;
  }

  *dest = 0;

  return _dest;
}

int main() {

  char *src = " Hel  lo  ";
  char dest[10];

    printf("[%s]\n", str_trim(src, dest));
}
