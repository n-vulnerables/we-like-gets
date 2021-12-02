#include <stdio.h> 
//https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1049157810&id=1043284351

// A comment.
// Another Comment
// Another one
// And again.
// S'more!
// :)
// 27
// 28
// 29
// 30
// 31
// 32
// RESET
// 34
// 35

typedef struct MyStruct
{
  char buf[5];
  int  i;
} MyStruct_t;

int main(void)
{
  MyStruct_t my;
  
  my.i = 10;
  
  printf ("my.i is %d\n", my.i);
  printf ("Enter a 10 digit number:");  /* Too big on purpose  */
  
  gets(my.buf); // Comment on line
  // Comment below
  
  printf ("my.buf is >%s<\n", my.buf);
  printf ("my.i is %d\n", my.i);
  
  return(0);
}
