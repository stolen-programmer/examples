//
// Created by stolen on 10/31/22.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ERR_NUM_FORMAT -1

int integer_parse_int(const char *src, int *err) {

  int sign_bit = *src == '-' || *src == '+';
  int sign = *src == '-';

  if (sign_bit) {
    src++;
  }

  int result = 0;

  while (*src) {
    if (!isdigit(*src)) {
      if (err != NULL) {
        *err = ERR_NUM_FORMAT;
      }
      return 0;
    }
    result = result * 10 + *src - '0';

    src++;
  }

  return sign ? -result: result;

}

int main() {
  const char *src = "-12345";

  int err = 0;
  // err 任何情况都等于0
  // 参数从右到左入栈
  printf("%d\nerr = %d\n", integer_parse_int(src, &err), err);
}
