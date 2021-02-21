/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  8 Basic C control structures and loops

  gcc loops.c -o loops

*/

#include <stdio.h>
#include <math.h>

int main() 
{
  int i;
  
  // print 0 ~ 9 every line.
  for (i = 0; i < 10; i = i + 1)
  { // - start of for loop
    printf("%d\n", i);
  } // - end of the for loop

  printf("\n");

  float angle;
  float pi;

  pi = 3.14159265;

  for (angle = 0.0; angle < 2.0 * pi; angle = angle + .01)
  {
    printf("%f\n", sin(angle));
  }

  printf("\n");

  // int i; 15 line already defined

  for (i = 100; i >= 0 ; i = i - 3)
  {
    printf("Counting down, we have %d left!\n", i);
  }

  printf("\n");

  // int i, j; // We can declare variables of the same type in one
            // line, separated by commas.

  int j;
  
  for (i = 0; i < 10 ; i = i + 1)
  {
    for (j = 0; j < i; j = j + 1)
    {
      printf("%d, ", j);
    }
    printf("\n");
  }

}