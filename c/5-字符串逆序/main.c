//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
char *reverse(char *dest, const char *src, int n) {
  int j = 0;

  for (int i = n - 1; i >= 0; --i,  j ++) {

    dest[j] = src[i];
  }

  dest[j] = 0;

  return dest;
}

int main() {

  char *src = "Hello";
  char dest[6];

  printf("%s", reverse(dest, src, 5));
}
