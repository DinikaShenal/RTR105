// loops are used (automatically) to repeat some parts of code
// alternative - programmer manually writes all repetitive code lines ... :-(

// while - while some state ...
// do ... while - while some state ...
// for - for or untill some state ...

// NB! loop for ALWAYS has two ; in () brackets
// for( ; expression ; ) action;
// for( ; expression ; )
//  action;
// for( ; expression ; ) {action_1; action_2;}
// for( ; expression ; )
//  {
//  action_1;
//  action_2;
//  }

// result of expression - is "false" (all bits of result contain 0)
//                      - or "true" (at least one bit of result with 1)

#include<stdio.h>

int main()
 {
 char c;

 for(c=10 ; c>=0 ; c--) // part before first ; is executed only one time
                        // part before first ; can contain multiple actions follwed by comma
                        // for(action_a,action_b ; expression ; action_y, action_z)
                        // part after second ; is executed multiple times
                        // execution of action(s) of loop continues while expression is true
  {
  printf("c = %d\n",c);
  }

 printf("Print after for loop.\n");

 return 0;
 }

