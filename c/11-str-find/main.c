//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

int str_find(const char *src, char ch) {

  for (int i = 0; src[i]; i++) {
    if (src[i] == ch) {
      return i;
    }

  }

  return -1;

}

int main() {

  char *src = "Hello";
  char ch = ' ';

  printf("%d\n", str_find(src, ch));

}
