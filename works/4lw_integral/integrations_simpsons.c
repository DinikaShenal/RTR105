

#include <stdio.h>
#include <math.h>

double f(double x);
double simpsons(double a, double b, int n);

int main() {
  // Testing the integration
  double a, b;
  int n = 100;
  printf("\nSimpsons Rule\n");
  printf("--------------\n");
  printf("\nEnter the first limit (make sure that it is greater than -1): ");
  scanf("%le",&a);
  printf("\nEnter the second limit (make sure that it is greater than first limit and less than 1): ");
  scanf("%le",&b);

  //writing the first limit and second limit to a text file
  FILE *f = fopen("integral_limits.txt", "w");
  fprintf(f, "%.6f ", a);
  fprintf(f, "%.6f ", b);
  fclose(f);

  printf("\nThe Integral result is : %.10f\n\n", simpsons(a, b, n));
  return 0;
}

double f(double x) {
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