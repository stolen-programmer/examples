//
// Created by stolen on 10/31/22.
//

#include <stdio.h>

char *substr(char *dest, const char *src, int offset, int n) {
  int i = 0;

  for (; i < n; ++i) {
    dest[i] = src[offset + i];
  }

  dest[i] = 0;

  return dest;
}

int main() {

  char *src = "Hello World";
  char dest[10];

  printf("%s\n", substr(dest, src, 2, 5));

}
