/*-------------------------------------------------------- 
* Name: John Bennett 
* Lab assignment: 2 B
* Lab Section: 3
* Date: 1/27/2017 
* Instructor: Mounika Ponugoti
* Program: lab2_B.c
* Description: initializes two integer arrays, calculates 
* dot product of the two arrays, output should include
* values of the two arrays and resulting dot product
*--------------------------------------------------------*/ 

// include standard header files
#include <msp430.h>
#include <stdio.h>

int main()
{
  //for loop counter
  int i;
  
  //declare arrays
  int array_1[5] = {1, 2, 3, 4, 5};
  int array_2[5] = {0, 1, 2, 3, -4};
  
  //dot product
  int dot_product = 0;
  
  //begin for loop
  for (i = 0; i <= 4; i++)
  {
    //multiply each element and add it to dot product
    dot_product += (array_1[i]*array_2[i]);
  }
   
  //print arrays
  printf("Array #1: %d %d %d %d %d\n", array_1[0],array_1[1],array_1[2],array_1[3],array_1[4]);
  printf("Array #2: %d %d %d %d %d\n", array_2[0],array_2[1],array_2[2],array_2[3],array_2[4]);
  
  //print result
  printf("Dot Product: %d", dot_product);
  
  return 0;
}