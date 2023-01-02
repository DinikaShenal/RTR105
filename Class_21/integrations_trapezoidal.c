#include <stdio.h>
#include <math.h>

double f(double x) {
  // Replace this with the function you want to integrate
  return asin(x);
}

double trapezoidal(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = (f(a) + f(b))/2;

  for (int i = 1; i < n; i++) {
    sum += f(a + i*h);
  }

  return sum * h;
}

int main() {
  // Test the integration
  double a = -0.5, b = 1;
  int n = 100;
  printf("%.10f\n", trapezoidal(a, b, n));
  return 0;
}
