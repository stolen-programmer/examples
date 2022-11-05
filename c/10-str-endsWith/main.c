//
// Created by stolen on 10/31/22.
//

#include <stdio.h>
#include <string.h>

int str_ends_with(const char *src, const char *dest) {
  
  int sl = strlen(src);
  int dl = strlen(dest);

  while (sl && dl) {
    if (src[sl - 1] != dest[dl - 1]) {
      return 0;
    }

    sl --;
    dl --;
  }

  // [hello]
  //   [elo] dl == 1
  return dl == 0;

}

int main() {

  char *src = "Hello";
  char *dest = "llo";

  printf("%d\n", str_ends_with(src, dest));

}
