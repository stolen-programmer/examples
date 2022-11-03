//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

int str_contains(const char *src, const char *dest) {

  char *_src = src;
  char *_dest = dest;

  while (*_src && *_dest) {

    if (*_src == *_dest) {
      _src++;
      _dest++;
      continue ;
    }

    src++;
    _src = src;
    _dest = dest;
  }

  // *src == 0
  // *src != 0
  // [hello]
  // [hello ] *_dest == ' '
  return *src && !*_dest;
}

int main() {

  char *src = "Hello World";
  char *dest = "ll";

  printf("%d\n", str_contains( src, dest));

}
