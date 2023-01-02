

#include <stdio.h>
#include <math.h>

double f(double x) {
  // Replace this with the function you want to integrate
  return asin(x);
}

double simpsons(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = f(a) + f(b);

  for (int i = 1; i < n; i += 2) {
    sum += 4 * f(a + i*h);
  }
  for (int i = 2; i < n; i += 2) {
    sum += 2 * f(a + i*h);
  }

  return sum * h / 3;
}

int main() {
  // Test the integration
  double a = -0.5, b = 1;
  int n = 100;
  printf("%.10f\n", simpsons(a, b, n));
  return 0;
}

