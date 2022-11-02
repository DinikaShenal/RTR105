#include<stdio.h>

// functions should be at least declared before mentions
char dialog(void); // declaration should be coherent to the definition
                   // - what function receives and what is data type of returned value

//char dialog_with_argument(int c_value_from_outside);
//char dialog_with_argument(char c_value_from_outside, char one_more_argument);
//data types and amount of arguments should be coherent with definition, identifiers can differ
// for every argument its' own data type should be mentioned
char dialog_with_argument(char c_value_from_outside);

int main()
 {
 char internal_c_of_main;

 internal_c_of_main;
 //internal_c_of_dialog; // can't be twitched here - it is inside other doll of "matrjoshka"
 //c_value_from_outside;

/*
 printf("Dear user, please, eneter one natural number: ");
 scanf("%hhd",&c);
 printf("Entered number was: %hhd\n",c);
*/
 internal_c_of_main = dialog(); // while function calling arguments inside () should be coherent
                                // to the definition of function
 printf("Entered number is (output from main): %hhd\n",internal_c_of_main);
 {;;;;;;;}
/*
 printf("Dear user, please, eneter one natural number: ");
 scanf("%hhd",&c);
 printf("Entered number was: %hhd\n",c);
*/
 internal_c_of_main = dialog();
 printf("Entered number is (output from main): %hhd\n",internal_c_of_main);

 internal_c_of_main = dialog_with_argument(internal_c_of_main);
 printf("New entered number is (output from main): %hhd\n",internal_c_of_main);

 return 0;
 }

//char dialog() // function as variable should have data type
char dialog(void) // function as variable should have data type
         // this data type should be coherent with returned value
         // => if we use return, then check a data type of returned value
         // => if we don't use return, data type should be void
         // also, as it was in main function - any variable we use - it should be
         // at leat declared - place for declaration, usually is inside {}
 {
 char internal_c_of_dialog;

 printf("Dear user, please, enter one natural number: ");
 scanf("%hhd",&internal_c_of_dialog);
 printf("Entered number is (output form dialog): %hhd\n",internal_c_of_dialog);

 return internal_c_of_dialog; // this COPY of value is returned to the scope
                              // inside which function was called
 }

char dialog_with_argument(char c_value_from_outside)
 {
 printf("\nPrevious entered value was (output from new dialog): %hhd\n",c_value_from_outside);
 printf("Dear user, please, enter new one natural number: ");
 scanf("%hhd",&c_value_from_outside); // variable mentioned as argument
                                      // could be used as usual variable
 printf("New entered number is (output form dialog): %hhd\n",c_value_from_outside);

 return c_value_from_outside; // this COPY of value is returned to the scope
                              // inside which function was called
 }
