//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <stdlib.h>

char *str_value_of_level(char *dest, int num, int level) {

  char *_dest = dest;

  if (abs(num) > 9 || num < 0) {
    dest = str_value_of_level(dest, num / 10, level + 1);
  }

  dest[0] = num == 0 ? '-': '0' + abs(num) % 10;

  if (level == 0) {
    dest[1] = 0;
    return _dest;
  } else {
    return dest + 1;
  }
}

char *str_value_of(char *dest, int i) {
  return str_value_of_level(dest, i, 0);
}

int main() {

  char dest[10];

  printf("[%s]\n", str_value_of(dest, -12345));
  printf("[%s]\n", str_value_of(dest, 12345));

}
