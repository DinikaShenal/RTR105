
// simpsons rule

#include <stdio.h>
#include <math.h>

double f(double x) {
  // Replace this with the function you want to integrate
  return asin(x);
}

double simpsons(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = 0;

  for (int i = 1; i < n; i += 2) {
    double x0 = a + i*h;
    double x1 = a + i*h + h/2;
    double x2 = a + (i + 1)*h;
    sum += (h/3) * (f(x0) + 4*f(x1) + f(x2));
  }

  return sum;
}

int main() {
  // Test the integration
  double a = -0.5, b = 1;
  int n = 100;
  printf("%.10f\n", simpsons(a, b, n));
  return 0;
}