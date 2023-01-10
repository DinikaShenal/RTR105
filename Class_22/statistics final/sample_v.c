#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define max_sym_length 100

void min_symbol(char sym_array[], int sym_length);
void max_symbol(char sym_array[], int sym_length);
void average_symbol(char sym_array[], int sym_length);
void ascending_sort(char sym_array[], int sym_length);
bool char_is_in_sentence(char min_symbol, char sym_array[], int sym_length);
void median_symbol(char sym_array[], int sym_length);
void mode_symbol(char sym_array[], int sym_length);

int main()
{
    char sym_array[max_sym_length]; //declaration of array
    int i,sym_length; //number of elements in array
    char temp_array[max_sym_length];
    int j;

    printf("\nEnter the sentence: \n");
    fgets(temp_array,max_sym_length-1,stdin);
    sym_length=strlen(temp_array);

    for (i = 0, j = 0; i < sym_length; i++) {
        if (temp_array[i] != ' ') {
            sym_array[j] = temp_array[i];
            j++;
        }
    }
    sym_array[j] = '\0';

    printf("\nThe symbol array is: %s",temp_array);
 
    printf("\n");

    printf("The array is: %s\n", sym_array);

    sym_length=strlen(sym_array);

    min_symbol(sym_array,sym_length);

    max_symbol(sym_array,sym_length);

    average_symbol(sym_array,sym_length);

    ascending_sort(sym_array,sym_length); //new

    median_symbol(sym_array,sym_length);

    mode_symbol(sym_array,sym_length);

    printf("\nThe new sorted symbol array is: %s", sym_array);
    printf("\n\n");
    return 0;

}

void min_symbol(char sym_array[], int sym_length)
{
    int min_value =127; // Initialize the minimum value to the maximum ASCII value
    char min_symbol;  // Declare a character variable to store the minimum symbol
    for (int i=0; i<sym_length-1;i++)
    {
        
        if (sym_array[i] != 0 && sym_array[i]<min_value) // If the current symbol has a smaller ASCII value
        {   
            min_value=sym_array[i]; // Update the minimum value
            min_symbol=sym_array[i]; // Update the minimum symbol
        }
        
    }    
    printf("\nThe symbol with the minimum ASCII value is: %c\n", min_symbol);

}

void max_symbol(char sym_array[], int sym_length)
{
    int i,max_value=0; // Initialize the maximum value to zero
    char max_symbol; // Declare a character variable to store the maximum symbol

    for (i = 0; i < sym_length; i++)
    {
        if (sym_array[i] > max_value)
        {
            max_value = sym_array[i]; // Update the maximum value
            max_symbol = sym_array[i]; // Update the maximum symbol
        }
    }

    printf("\nThe symbol with the maximum ASCII value is: %c\n", max_symbol);
}

void average_symbol(char sym_array[], int sym_length)
{
    int i,check , total=0;
    float average;
    char average_symbol; // Declare a character variable to store the average symbol

    for (i = 0; i < sym_length; i++)
    {
        total += sym_array[i]; // Adding the ASCII value of the symbol to the total
    }

    average = (float)total / sym_length; // Calulating the average ASCII value of the array
    average_symbol = (char)average; // Converting the average value to a symbol

    //printf("\nThe symbol with the average ASCII value is: %c\n",average_symbol);
    check = char_is_in_sentence(average_symbol, sym_array, sym_length);
    if (check == true)
    {
        printf("\nThe symbol with the average ASCII value is: %c\n",average_symbol);
    }
    else
    {
        printf("\nThe symbol/character is not in the sentence, but the character is shown below.\n");
        printf("The symbol not in the sentence with the average ASCII value is: %d\n",average_symbol);
        printf("The symbol not in the sentence with the average ASCII value is: %c\n",average_symbol);
    }
    
}

void ascending_sort(char sym_array[], int sym_length)
{
    int i, j, min_number;
    char temp_sym;

    for (i = 0; i < sym_length; i++)
    {
        min_number = i;
        for (j = i + 1; j < sym_length; j++)
        {
            if (sym_array[j] < sym_array[min_number])
            {
                min_number = j;
            }
        }

        //Swap the minimum symbol with the current symbol
        temp_sym = sym_array[min_number];
        sym_array[min_number] = sym_array[i];
        sym_array[i] = temp_sym;
    }
}

bool char_is_in_sentence(char min_symbol, char sym_array[], int sym_length) //checking if the symbol is in sentence
{
    for (int i=0; i<sym_length; i++)
    {
        if(sym_array[i] == min_symbol)
        {
           return true;
        }
    }
    return false;
}

void median_symbol(char sym_array[], int sym_length)
{
    int i,check;
    float median;
    char median_symbol; //Declare a character variable to store the median symbol

    if (sym_length % 2 == 0) //checking if the number of symbols in the array is even
    {
        median = (sym_array[sym_length / 2 +1 ] + sym_array[(sym_length / 2) -1]) / 2; //Calculating the median value
        //printf("\nmedian val: %f\n",median);
        median_symbol = (char)median; //Converting the median value to a symbol
    }

    else //Executes the below section if the number of the symbols in the array is odd
    {
        median = sym_array[sym_length / 2 +1]; //Calculating the median value
        median_symbol = (char)median; //Converting the median value to a symbol
    }
    
    check = char_is_in_sentence(median_symbol, sym_array, sym_length);
    if (check == true)
    {
        printf("\nmedian val: %f\n",median);
        printf("\nThe symbol with the median ASCII value is: %c\n",median_symbol);
    }
    else
    {
        printf("\nThe symbol/character is not in the sentence, but the character is shown below.\n");
        printf("The symbol not in the sentence with the median ASCII value is: %d\n",median_symbol);
        printf("The symbol not in the sentence with the median ASCII value is: %c\n",median_symbol);
    }

}

void mode_symbol(char sym_array[], int sym_length)
{
    int i,j;
    int sym_count[100] = {0}; //Initialize all the values in the count array to 0
    int max_count = 0; //Initialize the maximum count to 0
    char mode_symbol; //Declare a character variable to store the mode symbol

    for (i = 0; i < sym_length; i++)
    {
        for (j = 1; j < sym_length; j++)
        {
            if (sym_array[i] == sym_array[j]) //If the current symbol is found in the symbol array
            {
                sym_count[i]++; //Increase the count of the current symbol
            }
        }
        if (sym_count[i] > max_count) //If the count of the current symbol is greater than the current maximum count
        {
            max_count = sym_count[i]; //Update the maximum count
            mode_symbol = sym_array[i]; //Update the mode symbol
        }
    }

    printf("\nThe symbol with the mode ASCII value is: %c\n",mode_symbol);
}