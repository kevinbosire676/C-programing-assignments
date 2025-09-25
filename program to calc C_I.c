/*
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description: program to compute compound intrest
C_I=p(1+r/100)^t
*/
#include <math.h>
int main(){
 float principle,time,rate,compound_intrest;
 
 printf("Enter principle amount: ");
 scanf("%f",&principle);
 
 printf("Enter time: ");
 scanf("%f",&time);
 
 printf("Enter rate: ");
 scanf("%f",&rate);
 
 compound_intrest= principle*pow(1+(rate/100),time);
 
 printf("Your compound intrest is %.2f",compound_intrest);
 
return 0;
}
    