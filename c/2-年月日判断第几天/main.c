//
// Created by stolen on 10/28/22.
//

#include <stdio.h>

int sumOf(const int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += arr[i];
  }

  return sum;
}

int main(int argc, char **argv) {
  int year, month, day;
  int sum = 0;
  int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  printf("请输入年月日: ");

  scanf("%d %d %d", &year, &month, &day);

  sum = sumOf(months, month) + day;

  if (month > 2) {
    // 闰年
    if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0) {
      sum ++;
    }
  }

  printf("%d %d %d 是一年中的第 %d 天\n", year, month, day, sum);

  return 0;
}
