#include <stdio.h>


void min_symbol(char sym_array[], int arr_size)
{
    int i,min_value=127; // Initialize the minimum value to the maximum ASCII value
    char min_symbol;  // Declare a character variable to store the minimum symbol

    for (i = 0; i < arr_size; i++)
    {
        if (sym_array[i] < min_value)  // If the current symbol has a smaller ASCII value
        {
            min_value = sym_array[i];  // Update the minimum value
            min_symbol = sym_array[i];  // Update the minimum symbol
        }
    }

    printf("\nThe symbol with the minimum ASCII value is: %c\n", min_symbol);
    
}

void max_symbol(char sym_array[], int arr_size)
{
    int i,max_value=0; // Initialize the maximum value to zero
    char max_symbol; // Declare a character variable to store the maximum symbol

    for (i = 0; i < arr_size; i++)
    {
        if (sym_array[i] > max_value)
        {
            max_value = sym_array[i]; // Update the maximum value
            max_symbol = sym_array[i]; // Update the maximum symbol
        }
    }

    printf("\nThe symbol with the maximum ASCII value is: %c\n", max_symbol);
}

void average_symbol(char sym_array[], int arr_size)
{
    int i, total=0;
    float average;
    char average_symbol; // Declare a character variable to store the average symbol

    for (i = 0; i < arr_size; i++)
    {
        total += sym_array[i]; // Adding the ASCII value of the symbol to the total
    }

    average = (float)total / arr_size; // Calulating the average ASCII value of the array
    average_symbol = (char)average; // Converting the average value to a symbol

    printf("\nThe symbol with the average ASCII value is: %c\n",average_symbol);

}

void ascending_sort(char sym_array[], int arr_size)
{
    int i, j, min_number;
    char temp_sym;

    for (i = 0; i < arr_size; i++)
    {
        min_number = i;
        for (j = i + 1; j < arr_size; j++)
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

void median_symbol(char sym_array[], int arr_size)
{
    int i;
    float median;
    char median_symbol; //Declare a character variable to store the median symbol

    if (arr_size % 2 == 0) //checking if the number of symbols in the array is even
    {
        median = (sym_array[arr_size / 2] + sym_array[arr_size / 2 - 1]) / 2.0; //Calculating the median value
        for(i = 0; i < arr_size;i++)
        {
            if (median<=sym_array[i])
            {
                median = sym_array[i];
                break;
            }
        }
        median_symbol = (char)median; //Converting the median value to a symbol
    }

    else //Executes the below section if the number of the symbols in the array is odd
    {
        median = sym_array[arr_size / 2]; //Calculating the median value
        median_symbol = (char)median; //Converting the median value to a symbol
    }
    printf("\nThe symbol with the median ASCII value is: %c\n",median_symbol);
}

void mode_symbol(char sym_array[], int arr_size)
{
    int i,j;
    int sym_count[100] = {0}; //Initialize all the values in the count array to 0
    int max_count = 0; //Initialize the maximum count to 0
    char mode_symbol; //Declare a character variable to store the mode symbol

    for (i = 0; i < arr_size; i++)
    {
        for (j = 1; j < arr_size; j++)
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

int main()
{
    int arr_size; //number of elements in array
    char sym_array[100]; //declaration of array
    int i;

    printf("\nEnter the number of symbols that you want to enter: ");
    scanf("%d",&arr_size);

    printf("\nEnter the symbols of the array: \n");
    for (i = 0; i < arr_size; i++)
    {
        scanf(" %c", &sym_array[i]);  // Use %c to read a character
    }

    printf("\nThe symbol array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%c ", sym_array[i]);  // Use %c to print a character
    }
    printf("\n");

    min_symbol(sym_array,arr_size);

    max_symbol(sym_array,arr_size);

    average_symbol(sym_array,arr_size);

    ascending_sort(sym_array,arr_size);

    median_symbol(sym_array,arr_size);

    mode_symbol(sym_array,arr_size);

    printf("\nThe new sorted symbol array is: ");
    for (i = 0; i < arr_size; i++)
    {
        printf("%c ", sym_array[i]);  // Use %c to print a character
    }
    printf("\n\n");
    return 0;

}

