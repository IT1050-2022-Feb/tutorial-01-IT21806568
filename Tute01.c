/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(){
  
  int mark1,mark2;//Two variables for the marks
  
  float avg;
  printf("Enter the marks of the first subject: ");

  scanf("%d",&mark1);
  
  printf("Enter the mark of the second subject: ");
  scanf("%d",&mark2);
  
  avg = (mark1+mark2)/2;//calculating the average 
  
  printf("The average of the two subjects are: %.2f",avg);//displaying average
  
  return 0;


}