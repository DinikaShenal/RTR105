// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

double arcsin_solv(double x)
{
    long double a_start, S,r;
    //int x;
    int k=0;
    int n=500;

    
    a_start = x;
    S = a_start;
    //r = (pow(((2*k)-1),2) * x) / ((2*k) * ((2*k)+1));
    
    while(k<n){
        k++;
        a_start=a_start * (pow(((2*k)-1),2) * pow(x,2)) / ((2*k) * ((2*k)+1));
        S= S + a_start;
     
        if (k==n-1)
        {
            printf("num=%.2f\ta_n-1=%8.5Le\tS_n-1=%8.5Lf\n",x,a_start,S);
        }
        if (k==n)
        {
            printf("num=%.2f\ta=%8.5Le\tS=%8.5Lf\n",x,a_start,S);
        }
        
    }
    return S;
    
    
    
}

int main() {
    
    double num = 0.95;
    
    double x1,x2;
    
    printf("real value\n");
    x1 = asin(num);
    printf("S=%8.5f\n",x1);
    
    printf("\nmy value function\n");
    x2 = arcsin_solv(num);
    
    
    
    return 0;
}
