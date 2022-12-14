#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//#define N 100

int main()
{
  float a=-0.9 ,b=0.9;
  float delta_x=5.e-2;

  float * x;
  float * f_x;
  float * f_df_x;
  int N = (b-a)/delta_x + 1;
  x = (float*) malloc((N)*sizeof(float));
  f_x = (float*) malloc((N)*sizeof(float));
  f_df_x = (float*) malloc((N)*sizeof(float));
  if (x ==NULL) exit(1);

  printf("size of x array in elements - %d\n", N);
  //printf("size of x array - %d\n",x); 

  int i=0;
  x[0]=a;
  f_x[0]=asin(x[0]);
  f_df_x[0] = (1/(sqrt(1-pow(x[0],2))));
  printf("|   x\t| f(x)\t| f'(x)\t|\n");
  printf("-------------------------\n");
  printf("|%6.3f\t|%6.3f\t|%6.3f\t|\n",x[0],f_x[0],f_df_x[0]);
  i++;

  //while(x[i]<b)
  while(i<N)
  {
   x[i] = x[i-1] + delta_x;
   //printf("%3d. elements value - %6.3f\n",i,x[i]);
   f_x[i] = asin(x[i]);
   //printf("%3d. arcsine values are - %6.3f\n",i,f_x[i]);
   f_df_x[i] = (1/(sqrt(1-pow(x[i],2))));
   //printf("%3d. arcsine values are - %6.3f\n\n",i,f_df_x[i]);
   printf("|%6.3f\t|%6.3f\t|%6.3f\t|\n",x[i],f_x[i],f_df_x[i]);
   i++;
  }
  printf("-------------------------\n");

  //function asin vals
  /*
  f_x[0]=asin(x[0]);
  i++;
  while(i<N)
  {
   
   f_x[i] = asin(x[i]);
   printf("%3d. arcsine values are - %6.3f\n",i,f_x[i]);
   i++;
  }*/
}

