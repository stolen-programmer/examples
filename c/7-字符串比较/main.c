//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

int cmpstr(const char *src, const char *dest) {

  while (*src && *dest) {

    if (*src != *dest) {
      return *src - *dest;
    }

    src++;
    dest++;
  }

  // 0 - any
  // any - 0
  return *src - *dest;

}

int main() {

  char *src = "Hello World";
  char *dest = "Hello x";

  printf("%d\n", cmpstr(src, dest));

}
