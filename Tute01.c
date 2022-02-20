/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sb1, sb2;
  float avg;

  printf("Enter subject 1:");
  scanf("%d",&s1);

  printf("Enter subject 2:");
  scanf("%d",&s2);

  avg = (s1 + s2)/2.0;
  printf("Average marks: %.2f",avg);
  
  return 0;
}

