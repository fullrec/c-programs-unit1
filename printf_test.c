/*
  CSCA48 - Unit 1 - Introduction to Programming in C Winter 2021

  7 A few notes on printf

  gcc printf_test.c
  会直接编译生成一个 a.exe 文件，可以在终端直接输入执行这个文件（windows 平台）

*/

#include <stdio.h>

int main() 
{
  float pi;
  pi = 3.14159265;
  printf("Printing an int, %d\n", pi);
  printf("Printing an int, %f\n", pi);
  printf("\n");

  // 下面写法有小数点进位问题，与教程输出不符。见教材第12页
  printf("Printing an int, %1.0f\n", pi); // print 3
  printf("Printing an int, %1.1f\n", pi); // print 3.1
  printf("Printing an int, %1.2f\n", pi); // print 3.14
  printf("Printing an int, %1.3f\n", pi); // print 3.142 , should print 3.141 ??
  printf("Printing an int, %1.4f\n", pi);
  printf("Printing an int, %1.5f\n", pi);
  printf("Printing an int, %1.6f\n", pi);
  printf("Printing an int, %1.7f\n", pi);
  printf("Printing an int, %1.8f\n", pi);

}