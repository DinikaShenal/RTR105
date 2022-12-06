#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//function to calculate the arcsine value
double arcsin_solv(double x)
{
    long double a_start, S,r;
    int k=0;   //initially the k is set to equal to 0
    int n=500; //initially the n is set to equal to 500

    
    a_start = x;
    S = a_start;
    printf("a_0 = %0.5Le\tS_0 = %0.5Lf\n",a_start,S);
    while(k<n){
        k++;
        a_start=a_start * (pow(((2*k)-1),2) * pow(x,2)) / ((2*k) * ((2*k)+1)); 
        S= S + a_start;
     
        if (k==n-1) //prints the k=n-1 condition outputs
        {
            printf("a_499 = %8.5Le\tS_499 = %0.5Lf\n",a_start,S);
        }
        if (k==n)  //prints the k=n condition outputs
        {
            printf("a_500 = %8.5Le\tS_500 = %0.5Lf\n",a_start,S);
            printf("arcsin(%.3f) through the coded function = %0.5Lf\n",x,S);
        }
        
    }
    return S;
    
    
    
}
//function to read the text file
void fileread()
{
    FILE* file_ptr;
    char character;
    
    // Opening file in reading mode
    file_ptr = fopen("arcsine.txt", "r");

    if (NULL == file_ptr) {
    printf("file can't be opened \n");
    }
    do {
        character = fgetc(file_ptr);
        printf("%c", character);

    } while (character != EOF); // Checking if character is not EOF and If it is EOF stop reading.

    // Closing the file
    fclose(file_ptr); 
}

int main() {
    
    double num;
    double x1,x2;

    printf("\nARCSIN Function: \n");
    printf("Enter the argument x : ");
    scanf("%lf",&num);

    x1 = asin(num);  //uses the math.h library to calculate the arcsine value
    printf("arcsin(%.3f) = %.5f\n",num,x1);

    x2 = arcsin_solv(num);  //x2 gives the arcsine value according to the function i have coded
    fileread();  //it reads the arcsine.txt and prints the standard arcsine taylor series format and recurrence formulae

    return 0;
}
