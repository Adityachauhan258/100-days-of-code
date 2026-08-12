//Write a program to convert temperature from Celsius to Fahrenheit;
#include<stdio.h>
int main(){
float Celsius,Fahrenheit;
printf("Enter the temperature in Celsius:");
scanf("%f",&Celsius);
Fahrenheit = (Celsius * 9/5) + 32;
printf("%.2fCelsius=%.2f Fahrenheit",Celsius,Fahrenheit);
return 0;
}