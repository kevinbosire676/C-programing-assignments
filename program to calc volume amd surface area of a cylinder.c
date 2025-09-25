/*
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description: program to compute surface area and volume of a cylinder
S.A=2Πr*r+2Πrh
Volume=2Πr*r*h
*/
#include <stdio.h>
#include <math.h>

int main(){
 float radius,height,volume,surface_area ;
 
 printf("Enter radius of the cylinder: ");
 scanf("%f",&radius);
 
 printf("Enter height of the cylinder: ");
 scanf("%f",&height);
 
 volume=M_PI*(radius*radius)*height;
 printf("The volume of the cylindern is %.2f cm^3\n", volume);
 
 surface_area=2*(M_PI*radius*radius) + (M_PI*(radius+radius)*height);
 printf("The surface area of the cylinder  %.2f cm^3\n",surface_area);
 
return 0;
}
    