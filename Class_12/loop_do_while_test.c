
// loops are used (automatically) to repeat some parts of code
// alternative - programmer manually writes all repetitive code lines ... :-(

// while - while some state ...
// do ... while - while some state ...
// for - for or untill some state ...

// NB! in comparison with while - at least one time do and then check the expression
//     continue or not to continue execute action(s) of loop
// do action; while(expression);
// do
//  action;
// while(expression);
// do {action_1; action_2;} while(expression);
// do
//  {
//  action_1;
//  action_2;
//  }
// while(expression)

// result of expression - is "false" (all bits of result contain 0)
//                      - or "true" (at least one bit of result with 1)

#include<stdio.h>

int main()
 {
 char c = 10;

 do
  {
  printf("c = %d\n",c);
  c--;
  }
 while(c>=0);

 printf("Print after while loop.\n");

 return 0;
 }
