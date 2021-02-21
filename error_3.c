/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  5 Your first exercise

  error handle

  $ gcc error_3.c

error_3.c: In function 'main':
error_3.c:20:5: error: expected declaration or statement at end of input
     return 0;

  第24行缺少一个收尾的大括号!
*/

#include <stdio.h>

int main() 
{
    printf("***** HELLO WORLD *****\n");
    return 0;
// Missing a closing curly brace!
