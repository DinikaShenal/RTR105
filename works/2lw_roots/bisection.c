#include <stdio.h>
#include <math.h>

//function to calculate the arcsine value
double arcsin_solv(double x)
{
    float a_start, S,r;
    int k=0;   //initially the k is set to equal to 0
    int n=500; //initially the n is set to equal to 500

    
    a_start = x;
    S = a_start;
    while(k<n){
        k++;
        a_start=a_start * (pow(((2*k)-1),2) * pow(x,2)) / ((2*k) * ((2*k)+1)); 
        S= S + a_start;
        
    }
    return S;    
}


int main()
{
    float a, b, x, delta_x=1.e-3/*0.001*/,funkc_a,funkc_b,funkc_x;
    int k=0;
    
    printf("\nEnter the first limit: ");
    scanf("%f",&a);
    printf("\nEnter the second limit: ");
    scanf("%f",&b);

    funkc_a=arcsin_solv(a);
    funkc_b=arcsin_solv(b);
    
    printf("\n");

    if(funkc_a*funkc_b>0)
    {
        printf("Interval [%.3f ; %.3f] asin(x) function\n",a,b);
        printf("There are no roots or There are even number of roots\n");
        return 1;
    }

    printf("              asin(%7.3f)=%7.3f\t\t\t\t",a,arcsin_solv(a));
    printf("asin(%7.3f)=%7.3f\n",b,arcsin_solv(b));

    while((b-a)>delta_x)
    {
        k++;
        x=(a+b)/2;
        if(funkc_a*arcsin_solv(x)>0)
        {
            a=x;
        }
        else
        {
            b=x;
        }
        printf("%2d iteration: asin(%7.3f)=%7.3f\t",k,a,arcsin_solv(a));
        printf("asin(%7.3f)=%7.3f\t",x,arcsin_solv(x));
        printf("asin(%7.3f)=%7.3f\n",b,arcsin_solv(b));

    }

    printf("\nThe root is located at x=%.3f, because asin(x) is %.3f\n\n",x,arcsin_solv(x));
    return 0;
    

}