/*
Date: 2-10-2025
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description: Data_bundle_purchase
*/
#include <stdio.h>
int main(){
int choice;

printf("Please select data bundle\n");
printf("1: 100mbs @ 50 Ksh\n");
printf("2: 500mbs @ 200 Ksh\n");
printf("3: 2Gb @ 3500 Ksh\n");
printf("4: 5Gb @ 500 Ksh\n");

printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice){
case 1:
printf("You selected 100mbs. Cost 50 Ksh\n");
break;

case 2:
printf("You selected 500mbs. Cost 200 Ksh\n");
break;

case 3:
printf("You selected 2Gb. Cost 350 Ksh\n");
break;

case 4:
printf("You selected 5Gb. Cost 500 Ksh\n");
break;

default :
printf("Invalid choice.\n");
break;
}
return 0;
}
