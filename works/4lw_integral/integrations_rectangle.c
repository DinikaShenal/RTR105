//rectangle rule

#include <stdio.h>
#include <math.h>

double f(double x); 
double rectangle(double a, double b, int n);

int main() {
  // Testing the integration
  double a,b;
  int n = 100;
  printf("\nRectangle Rule\n");
  printf("---------------\n");
  printf("\nEnter the first limit (make sure that it is greater than -1): ");
  scanf("%le",&a);
  printf("\nEnter the second limit (make sure that it is greater than first limit and less than 1): ");
  scanf("%le",&b);

  //writing the first limit and second limit to a text file
  FILE *f = fopen("integral_limits.txt", "w");
  fprintf(f, "%.6f ", a);
  fprintf(f, "%.6f ", b);
  fclose(f);

  printf("\nThe Integral result is : %.10f\n\n", rectangle(a, b, n));
  return 0;
}

double f(double x) {
  return asin(x);
}

double rectangle(double a, double b, int n) {
  double h = (b-a)/n;
  double sum = 0;

  for (int i = 0; i < n; i++) {
    double x= a + i*h + h/2;
    sum += h*f(x);
  }

  return sum;
}