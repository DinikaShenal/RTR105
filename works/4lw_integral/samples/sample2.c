
//trapezoidal rule

#include <stdio.h>
#include <math.h>

double f(double x){
    return asin(x);
}

/*
double trapezoidal(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = 0;

  for (int i = 1; i < n; i++) {
    double x0 = a + i*h;
    double x1 = a + (i+1)*h;
    sum += (h/2)*f(x0) + f(x1);
  }

  return sum ;
}*/

int main() {
  // Test the integration
  double a = -0.5, b = 1;
  int n = 100;
  double h = (b-a)/n;
  double sum = 0;
  for (int i = 1; i < n; i++) {
    double x0 = a + i*h;
    double x1 = a + (i+1)*h;
    sum += (h/2)*f(x0) + f(x1);
  }
  printf("%.10f\n", sum);
  return 0;
}