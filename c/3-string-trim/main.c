//
// Created by stolen on 10/29/22.
//

#include <stdio.h>
#include <string.h>
void trim(char *src, int n, char *dest) {
  int offset = 0;
  for (int i = 0; i < n; ++i) {
    if (src[i] == ' ') {
      continue ;
    }

    dest[offset++] = src[i];
  }

  dest[offset] = 0;
}

int main() {
  // 字符串去空格
  char *str = "Hello World\n";
  char buf[15];
  int l = strlen(str);

  trim(str, strlen(str), buf);

  printf("%d [%s] ",l, buf);
}
