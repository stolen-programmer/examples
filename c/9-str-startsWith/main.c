//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

int str_starts_with(const char *src, const char *dest) {

  while (*src && *dest) {
    if (*src != *dest) {
      return 0;
    }

    src++;
    dest++;
  }

  // [hello]
  // [hello ] *dest == ' '
  return !*dest;
}

int main() {

  char *src = "Hello";
  char *dest = "Hello ";

  printf("%d\n", str_starts_with(src, dest));

}
