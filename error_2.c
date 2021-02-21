/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  5 Your first exercise

  error handle

  $ gcc error_2.c

error_2.c:23:8: error: expected declaration specifiers or '...' before string constant
 printf("This statement is outside any function!");

  第24行语句在函数外了执行不了
*/

#include <stdio.h>

int main() 
{
    printf("***** HELLO WORLD *****\n");
    return 0;
}

printf("This statement is outside any function!");
