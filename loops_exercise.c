/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  8 Basic C control structures and loops

  EXERCISE

  Multiplication of 2 to 10

  gcc loops_exercise.c -o loops_exercise

*/


#include <stdio.h>
#include <math.h>

int main() 
{
  int i,j;
  
  // P13 EXERCISE： 0 ~ 9 reverse order print
  printf("0 ~ 9 reverse order print:\n");

  for (i = 9; i >= 0; i = i - 1)
  { 
    printf("%d\n", i);
  } 

  // P16 EXERCISE：Multiplication of 2 to 10
  printf("Multiplication of 2 to 10\n");

  for (i = 2; i <= 10; i = i + 1)
  { 
    j = i * i;
    printf("%d = %d * %d \n", j, i, i);
  } 

}