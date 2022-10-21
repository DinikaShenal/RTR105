#include <stdio.h>

int main() {
char c1, c2, c3;
char order;
printf("\nEnter letters in lower case\n");
printf("----------------------------\n\n");

printf("Enter the order you want(Ascending('a') or Descending('d')) : ");
scanf("%c",&order);
printf("\nEnter the first letter: ");
scanf("\n%c", &c1);
printf("Enter the second letter letter: ");
scanf("\n%c", &c2);
printf("Enter the third letter: ");
scanf("\n%c", &c3);

int first_char = (int) c1;    //getting the anscii decimal of the character
int second_char = (int) c2;
int third_char = (int) c3;

int min = first_char;
int mid = second_char;
int max = third_char;

//ascending order code
if (min>mid)
    {
        mid = first_char; min = second_char;
    }
    if(mid>max)
    {
        max = mid;
        mid = third_char;
        if(min>mid)
        {
            mid = min;
            min = third_char;
        }
    }
//Ascending order
if(order=='a'){
    printf("\nLetters are %c %c %c\n\n",min,mid,max);
}
//Descending order
else if(order=='d'){
    printf("\nLetters are %c %c %c\n\n",max,mid,min);
}


return 0;
}