//rectangle previous code with error

#include <stdio.h>
#include <math.h>

double f(double x) {
  // Replace this with the function you want to integrate
  return asin(x);
}

double rectangle(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = 0;

  for (int i = 0; i < n; i++) {
    sum += f(a + i*h) * h;
  }

  return sum;
}

int main() {
  // Test the integration
  double a = -0.5, b = 1;
  int n = 100;
  printf("%.10f\n", rectangle(a, b, n));
  return 0;
}

