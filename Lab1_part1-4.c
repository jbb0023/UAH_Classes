/*--------------------------------------------------------------
* Name: John Bennett
* Lab assignment: Lab 1 part 1
* Lab Section: 03
* Date: 1/20/2017
* Instructor: Mounika Ponugoti 
* Program: Lab1_part1.c
* Description: 
*       Calculates value of an integer raised to a power
*       without using recursion (use a for loop instead) and 
*       prints the result. 
*  
*  How many clock cycles does the demo code with recursion 
*  take to complete? 
*       206 on printf statement, 14630 on "return 0"
* 
*  How many clock cycles does your implementation take? 
*       26 on printf statement, 5798 on "return 0"
* 
*  Explain the difference.  
*       the use of separate functions requires more memory allocation
*       than a simple for loop. The processor must fetch and retrieve 
*       many more instructions when leaving main.
* --------------------------------------------------------------*/


#include <msp430.h>     //include header for msp430
#include <stdio.h>      // include standard input/output operations

int main(void)
{
  // variable declarations to be calculated
  int base = 4; 
  int power = 2;
  int answer;
  
  // for loop storage variable
  int i;
  
  if(power == 0)
  {
    answer = 1;
  }
  else
  {
    // final answer variable
    answer = base;
    
    //begin for loop
    for (i = power; i > 1; i--)
    {
      answer *= base;
    }
  }
  // print base, power and answer
  printf("%d raised to the power %d is %d", base, power, answer);
  
  //exit program
  return 0;
}