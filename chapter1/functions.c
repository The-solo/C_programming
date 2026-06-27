#include<stdio.h>

double celsius_converter(double farh) {
  double cel = 5 * (farh-32) / 9;
  return cel;
}

int main () {
  double farh = 69;
  double ans = celsius_converter(farh);
  printf("%f\n", ans);
}

