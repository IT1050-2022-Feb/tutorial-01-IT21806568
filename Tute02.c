/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include<stdio.h>
int main(void){
  
  float distance,rate;
  
  printf("Enter the distance travelled in km: ");
  scanf("%f",&distance);
  
  if(distance<=30){ //checking whether distance travelled is under 30km
  	rate = distance*50; //calculating the rate
  	
  }
  else{
  	rate = 30*50+(distance-30)*40;
  }
  printf("Amount to be paid: %.2f",rate);//displaying amount of rent.
  return 0;


}