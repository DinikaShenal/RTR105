// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double arcsin_solv(double x)
{
    long double a_start, S,r;
    //int x;
    int k=0;
    int n=500;

    
    a_start = x;
    S = a_start;
    //r = (pow(((2*k)-1),2) * x) / ((2*k) * ((2*k)+1));
    printf("a_0 = %0.5Le\tS_0 = %0.5Lf\n",a_start,S);
    while(k<n){
        k++;
        a_start=a_start * (pow(((2*k)-1),2) * pow(x,2)) / ((2*k) * ((2*k)+1));
        S= S + a_start;
     
        if (k==n-1)
        {
            //printf("num=%.2f\ta_n-1=%8.5Le\tS_n-1=%8.5Lf\n",x,a_start,S);
            printf("a_499 = %8.5Le\tS_499 = %0.5Lf\n",a_start,S);
        }
        if (k==n)
        {
            //printf("num=%.2f\ta=%8.5Le\tS=%8.5Lf\n",x,a_start,S);
            printf("a_500 = %8.5Le\tS_500 = %0.5Lf\n",a_start,S);
            printf("arcsin(%.3f) through the coded function = %0.5Lf\n",x,S);
        }
        
    }
    return S;
    
    
    
}

int main() {
    
    double num;
    
    double x1,x2;

    FILE* ptr;
    char ch;
    
    printf("ARCSIN Function: \n");
    printf("Enter the argument x : ");
    scanf("%lf",&num);
    //printf("real value\n");
    x1 = asin(num);
    printf("arcsin(%.3f) = %.5f\n",num,x1);
    
    //printf("\nmy value function\n");
    x2 = arcsin_solv(num);
    
    // Opening file in reading mode
    ptr = fopen("sine.txt", "r");

    if (NULL == ptr) {
    printf("file can't be opened \n");
    }

    //printf("content of this file are \n");

    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);

        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);

    // Closing the file
    fclose(ptr);
    
    
    return 0;
}
