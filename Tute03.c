/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int no,count = 1,sum = 0;

  printf("enter a positive number = ");
  scanf("%d",&no);

  while(count <= no)
  {
    sum = sum + count;
    count++;

  }
  printf("sum is = %d\n",sum);
  
  return 0;
}

