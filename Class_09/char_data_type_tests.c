#include<stdio.h>

int main()
 {
 //printf("value (as symbol) of variable a before declaration: %c\n",a);
 // NB! variable couldn't be used before declaration
 char a; // one "action" - declaration of variable with
         // identifier "a" and data type "char"
         // declaration means - connect (or assign) some area (some amount
         // of bytes - amount of bytes corresponds to data type)
         // in memory with identifier
         // placement memory is described by address (we will
         // talk about it in some next lesson)
         // NB! with assigned memory amount (space) isn't a vacuum
         // there are states (0,1) left from previous programms
         // 0000 1111 or 0101 1010 or 0011 0001 etc.
 printf("value (as symbol) of variable a just after declaration: %c\n",a);
 printf("value (as dec number) of variable a just after declaration: %d\n",a);
 printf("value (as hex number) of variable a just after declaration: %#x\n",a);
 printf("value (as oct number) of variable a just after declaration: %#o\n",a);
 // unfortunately in C language there isn't a speciefier for bin numbers :-D
 a = 56; // NB! "=" isn't equal like mathematics it is ASSIGN!!!
         // we have two default data types for numbers 56 -> int and 5.6e-3 -> double
         // 56 - integer (4 bytes) constant written in dec numeral system
         // 56(dec) = 128(2^7)*0+64(2^6)*0+32(2^5)*1+16(2^4)*1+8(2^3)*1+4(2^2)*0+2(2^1)*0+1(2^0)*0 -> 
         //         = 0000 0000  0000 0000  0000 0000  0011 1000(bin)
         // what will be stored? - only 8 "junior" btes will be stored
         // a in memory will conteain 0011 1000
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);

 //int a;// NB! variable couldn't be redeclared

 a = 0x4b;
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);

 a = 0100;
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);

 a = ']';
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);

 a = (char)56; // not default (int) data type for constant
         // 56 - integer (1 byte) constant written in dec numeral system
         // 56(dec) = 128(2^7)*0+64(2^6)*0+32(2^5)*1+16(2^4)*1+8(2^3)*1+4(2^2)*0+2(2^1)*0+1(2^0)*0 -> 
         //         = 0011 1000(bin)
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);

 // NB! You have so many bytes as it is for specific data type
 a = 321;
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);
 // Homework (a) - why instead of 321 we see 65

 a = 160;
 printf("\nvalue (as symbol) of variable a just after assignment: %c\n",a);
 printf("value (as dec number) of variable a just after assignment: %d\n",a);
 printf("value (as hex number) of variable a just after assignment: %#x\n",a);
 printf("value (as oct number) of variable a just after assignment: %#o\n",a);
 // Homework (a) - why instead of 160 we see -96


 return 0;
 }
