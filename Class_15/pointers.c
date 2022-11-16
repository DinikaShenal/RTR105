// pointer - is an address

#include<stdio.h>

int main()
 {
 int i_value = 857;
 printf("i_value (value; variable name used) = %d\n",i_value);

 int *i_pointer = &i_value; // i_pointer (also) is variable for pointer (address)
                            // storage
                            // to get an address of some discrete variable
                            // & should be used (we have used in scanf)
 printf("Placement of i_value variable in memory - %p\n",i_pointer);
 printf("Size of i_value - %ld (bytes)\n",sizeof(i_value)); // depends on data type

 printf("Size of i_pointer - %ld (bytes)\n",sizeof(i_pointer)); // depends on architure of computer
                                                                // 32 bits (4 bytes), 64 bits (8 bytes)
 // 2^64 -> 18446744073709551616 = 16 EB
 // (on 64 bits machine theoretically 16 exa bytes could be addressed)
 printf("i_value (value; address of variable used) = %d\n\n",*i_pointer);

 printf("value after i_value = %d (%ld bytes)\n\n",*(i_pointer+1),sizeof(*(i_pointer+1)));

 double d_value = 1.5e-2; // 1.5 * 10^(-2) = 0.0015
 printf("d_value (value; variable name used) = %f\n",d_value); // %f - by default
                                                               // 6 digits after dot
 double *d_pointer = &d_value;
 printf("Placement of d_value variable in memory - %p\n",d_pointer);
 printf("Size of d_value - %ld (bytes)\n",sizeof(d_value));
 printf("Size of d_pointer - %ld (bytes)\n",sizeof(d_pointer));
 printf("d_value (value; address of variable used) = %f\n\n",*d_pointer);

 printf("value after d_value = %f (%ld bytes)\n\n",*(d_pointer+1),sizeof(*(d_pointer+1)));

 return 0;
 }

/*
Placement of i_value variable in memory - 0x7ffed586debc
                                          0x7ffed586debd
                                          0x7ffed586debe
                                          0x7ffed586debf
Placement of d_value variable in memory - 0x7ffed586dec0
...the next variable could placed only at 0x7ffed586dec8
*/
