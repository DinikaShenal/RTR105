// loops are used (automatically) to repeat some parts of code
// alternative - programmer manually writes all repetitive code lines ... :-(

// while - while some state ...
// do ... while - while some state ...
// for - for or untill some state ...

// while(expression) action;
// while(expression)
//  action;
// while(expression) {action_1; action_2;}
// while(expression)
//  {
//  action_1;
//  action_2;
//  }

// result of expression - is "false" (all bits of result contain 0)
//                      - or "true" (at least one bit of result with 1)

#include<stdio.h>

int main()
 {
 char c = 10;
 //unsigned char c = 10; // be carefull with conditions

// while(c>=0)
//  printf("c = %d\n",c);

 while(c>=0)
// while(c)// c==0
  {
  printf("c = %d\n",c);
  //break; // usually break should be "under" some condition
  //return 0; // also possible - but it will finish all program execution
  c--; // c = c - 1; // c -= 1; // --c;
  }

 printf("Print after while loop.\n");

 return 0;
 }

