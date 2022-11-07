//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

char * str_replace(const char *src, char *dest, char old, char newChar) {
  char *_dest = dest;
  while (*src) {
    if (*src == old) {
      *dest = newChar;
    } else {
      *dest = *src;
    }

    src++;
    dest++;
  }

  *dest = 0;

  return _dest;
}

int main() {

  char *src = "Hello";
  char dest[10];

  printf("%s\n", str_replace(src, dest, 'l', 'e'));

}
