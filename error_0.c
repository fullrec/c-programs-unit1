/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  5 Your first exercise

  error handle

  $ gcc error_0.c

error_0.c: In function 'main':
error_0.c:18:38: error: expected ';' before 'return'
   printf("***** HELLO WORLD *****\n")
                                      ^
                                      ;
   return 0;

  确实分号结束语句
*/

#include <stdio.h>

int main() 
{
  printf("***** HELLO WORLD *****\n") 
  return 0;
}