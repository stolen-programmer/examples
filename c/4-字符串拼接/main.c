//
// Created by stolen on 10/30/22.
//

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {

  char dest[12] = "Hello ";
  char *src = "world";

  strcat(dest, src);

  printf("%s", dest);
}
