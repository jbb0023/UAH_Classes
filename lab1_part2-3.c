/*--------------------------------------------------------------
* Name: John Bennett
* Lab assignment: Lab 1 part 1
* Lab Section: 03
* Date: 1/20/2017
* Instructor: Mounika Ponugoti 
* Program: Lab1_part2.c
* Description: 
*       C program to count the number of alphabetic characters
*       (upper case and lower case letters) in a string
*--------------------------------------------------------------*/

#include <msp430.h>     // include header for msp430
#include <stdio.h>      // include standard input/output operations
#include <ctype.h>      // include header for isalpha() function


int main()
{
  // declare integer values i for for loop, numchars to store number of letters
  int i, numchars = 0;
  
  // create array to store string (estimated max size needed 100)
  // store given string into array value
  char ch[100] = " ";
  
  // for each character in string, test if it's an alphabetic character
  // if it is, increment letter variable by 1
  // if not increment i and repeat
  // end once point in string is reached where there are no more characters
  for(i = 0; ch[i]!='\0';i++)
  {
    if (isalpha(ch[i]) == 1)
    {
      numchars++;
    }
  }
  
  // print the string and the number of letters in it
  printf("%s contains %d alphabetic characters", ch, numchars);
  
  // exit the program
  return 0;
}