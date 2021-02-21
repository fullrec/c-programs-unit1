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
  
  // Multiplication of 2 to 10
  for (i = 2; i <= 10; i = i + 1)
  { 
    j = i * i;
    printf("%d = %d * %d \n", j, i, i);
  } 


}