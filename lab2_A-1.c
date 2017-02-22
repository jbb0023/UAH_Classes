/*-------------------------------------------------------- 
* Name: John Bennett 
* Lab assignment: 2 A
* Lab Section: 3
* Date: 1/27/2017 
* Instructor: Mounika Ponugoti
* Program: lab2_A.c
* Description: prints sizes and ranges of common data types
* including char, short int, int, long int, unsigned int,
* unsigned long int, float, and double
*--------------------------------------------------------*/ 

// don't hardcode size values..

//include standard headers
#include <msp430.h>
#include <stdio.h>

//include 
#include <limits.h>
#include <float.h>

int main()
{
  // print sizes section start
  printf("Sizes (in bytes)\n");
  
  //size of char
  printf("character: %d\n", CHAR_BIT);
  
  //size of short int
  printf("short int: %d\n", sizeof(short int));
  
  //size of int
  printf("int: %d\n", sizeof(int));
  
  //size of long int
  printf("long int: %d\n", sizeof(long));  
  
  //size of unsigned int
  printf("unsigned int: %d\n", sizeof(unsigned int));
  
  //size of unsigned long int
  printf("unsigned long int: %d\n", sizeof(unsigned long int));
  
  //size of float
  printf("float: %d\n", sizeof(float));
  
  //size of double
  printf("double: %d\n", sizeof(double));
  
  //print ranges section start       
  printf("\nRanges: (min, max)\n");
  
  //print range of char
  printf("character: (%d, %d)\n",  CHAR_MIN, CHAR_MAX);
  
  //print range of short int
  printf("short int: (%d, %d)\n",  SHRT_MIN, SHRT_MAX);
  
  //print range of int
  printf("int: (%d, %d)\n", INT_MIN, INT_MAX);
  
  //print range of long int
  printf("long int: (%ld, %ld)\n", LONG_MIN, LONG_MAX);
         
  //print range of unsigned int
  printf("unsigned int: (%u, %u)\n", 0, UINT_MAX);
  
  //print range of unsigned long int
  printf("unsigned long int: (%d, %lu)\n", 0, ULONG_MAX);
  
  //print range of float
  printf("float: (%e, %e)\n", FLT_MIN, FLT_MAX);
  
  //print range of double
  printf("double: (%Le, %Le)\n", DBL_MIN, DBL_MAX);
 
  return 0;
}