// operation:     operand_1 operation operand_2     |sometimes - operation operand|
//                                                            or operand opeartion
//               (data type)         (data type)
//                              ||
//                              \/
//                      result_of_operation
//                          (data type)
// data type - char, short, int, float, double (+ long + long long + unsigned)

// usually, data type of result is "bigger" data type in operation
// (corresponds to the data of one of operands)

// mathematical: + (addition)
//               - (substruction)
//               * (multiplication)
//               / (division)
//               % (reminder)
//               ++ (increment)
//               -- (decrement)
//               int i1 = 5, i2 = 6, ir;
//               ir = i1 + i2; // after this operation ir will be equal to 11
//               ir = ir + 10; // after this operation ir will be equal to 21
//               ir += 10; // this is the same as ir = ir + 10; just written shortly
//               ir++; // ir = ir + 1; vai ir += 1;
//               ++ir; // difference in comparison to previous
//                     // increment and then use or
//                     // use and then increment
// relational: <, <=, >=, >, ==, !=
// logical: &&, ||, ! (1 operand)
// logical by bits: &, |, ^, ~ (1 operand)
// bit operations: >>, << (then we shift bit sequence it's not shifted in loop)

#include<stdio.h>

int main()
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2 = 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));

 // suggestions for investigation:
 //https://github.com/tatusmatrix/RTR105_2022_V01/blob/main/Class_10/operations_tests.c

 // % - is "prohibited" for real numbers (float, double)
 // (in C language ... in some other programming languages it is possible)
 //printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
 //printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
 //printf(" = %.1f (%ld bytes)\n\n",f1%f2,sizeof(f1%f2));
 // 456 % 50 -> 6
 // 1000 % 25 -> 0

 // 4 / 5 -> 0 to have 0.8 => 1. * 4 / 5 [double * int / int = double]
 //                       or (float)4 / 5 [float / int = float]
 //                       or (float)c1 / c2 [float / char = float]
 //                       or 4. / 5 [double / int = double]
 // 12 / 7 -> 1



 return 0;
 }
