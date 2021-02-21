/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  5 Your first exercise

  error handle

  $ gcc error_1.c

error_1.c: In function 'main':
error_1.c:25:12: warning: character constant too long for its type
     printf('***** HELLO WORLD *****\n');
            ^~~~~~~~~~~~~~~~~~~~~~~~~~~
error_1.c:25:12: warning: passing argument 1 of 'printf' makes pointer from integer without a cast [-Wint-conversion]
In file included from error_1.c:21:
C:/mingw64/x86_64-w64-mingw32/include/stdio.h:509:48: note: expected 'const char * restrict' but argument is of type 'int'
   int __cdecl printf(const char * __restrict__ _Format,...);

  字符串用双引号而不是单引号
*/

#include <stdio.h>

int main() 
{
    printf('***** HELLO WORLD *****\n');
    return 0;
}