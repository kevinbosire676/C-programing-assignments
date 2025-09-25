/*
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description: program to compute simple intrest
S_I=P*T*R/100
*/
#include <stdio.h>
int main(){
 float principle,time,rate,intrest;
 
 printf("Enter principle amount: ");
 scanf("%f",&principle);
 
 printf("Enter time: ");
 scanf("%f",&time);
 
 printf("Enter rate: ");
 scanf("%f",&rate);
 
 intrest=principle*time*rate/100;
 
 printf("Your simple intrest is %.2f",intrest);
 
return 0;
}
    