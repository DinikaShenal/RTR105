#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//#define N 100

int main()
{
  float a=-0.9 ,b=0.9;
  float delta_x=5.e-3;
  int N = (b-a)/delta_x + 1;

  float * x;
  x = (float*) malloc((N)*sizeof(float));
  if (x ==NULL) exit(1);

  float * f_x;
  f_x = (float*) malloc((N)*sizeof(float));
  if (f_x ==NULL) exit(1);

  float * f_df_x;
  f_df_x = (float*) malloc((N)*sizeof(float));
  if (f_df_x ==NULL) exit(1);

  float * f_df_x2;
  f_df_x2 = (float*) malloc((N)*sizeof(float));
  if (f_df_x2 ==NULL) exit(1);

  float * f_ddf_x;
  f_ddf_x = (float*) malloc((N)*sizeof(float));
  if (f_ddf_x ==NULL) exit(1);

  float * f_ddf_x2;
  f_ddf_x2 = (float*) malloc((N)*sizeof(float));
  if (f_ddf_x2 ==NULL) exit(1);

  printf("size of x array in elements - %d\n", N);
  //printf("size of x array - %d\n",x); 

  int i=0;
  x[0]=a;
  f_x[0]=asin(x[0]);
  f_df_x[0] = (1/(sqrt(1-pow(x[0],2))));
  f_ddf_x[0] = (x[0]/pow(1-pow(x[0],2),(1.5)));
  i++;

  //while(x[i]<b)
  while(i<N)
  {
   x[i] = x[i-1] + delta_x;
  
   f_x[i] = asin(x[i]);
  
   f_df_x[i] = (1/(sqrt(1-pow(x[i],2))));
 
   f_ddf_x[i] = (x[i]/pow(1-pow(x[i],2),(1.5)));
   
   
   i++;
  }
  
  // for f_df_x2
  i=0;
  while(i<N)
  {
    f_df_x2[i] = (f_x[i+1]-f_x[i])/(x[i+1]-x[i]);
    i++;
  }

  i=0;
  while(i<N)
  {
    f_ddf_x2[i] = (f_df_x2[i+1]-f_df_x2[i])/(x[i+1]-x[i]);
    i++;
  }

  //printing part of the whole thing
  
  printf("|\tx\t|\tf(x)\t|f'(x)_a\t|f'(x)_d\t|f''(x)_a\t|f''(x)_d\t|\n");
  printf("-------------------------------------------------------------------------------------------------\n");
  i=0;
  while (i<N)
  {
    if (i==N-1)
    {
      printf("|%10.3f\t|%10.3f\t|%10.3f\t|\t\t|%10.3f\t|\t\t|\n",x[i],f_x[i],f_df_x[i],f_ddf_x[i]);
    }
    if (i==N-2)
    {
      printf("|%10.3f\t|%10.3f\t|%10.3f\t|%10.3f\t|%10.3f\t|\t\t|\n",x[i],f_x[i],f_df_x[i],f_df_x2[i],f_ddf_x[i]);
    }
    else if(i<N-2)
    {
      printf("|%10.3f\t|%10.3f\t|%10.3f\t|%10.3f\t|%10.3f\t|%10.3f\t|\n",x[i],f_x[i],f_df_x[i],f_df_x2[i],f_ddf_x[i],f_ddf_x2[i]);
    }
    //printf("|%6.3f\t|%6.3f\t|%6.3f\t|%6.3f\t|%6.3f\t|%6.3f\t|\n",x[i],f_x[i],f_df_x[i],f_df_x2[i],f_ddf_x[i],f_ddf_x2[i]);
    i++;
  }
  printf("-------------------------------------------------------------------------------------------------\n");


}