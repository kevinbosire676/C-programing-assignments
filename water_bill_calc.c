/*
Date: 2-10-2025
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description: Water bill calculate
*/
#include <stdio.h>
int main(){
float units, total_bill = 0.0;

printf("Please enter water units consumed: ");
scanf("%f",&units);

if(units <= 30)
{total_bill=units*20;}

else if(units <= 60)
{total_bill=(30*20) + ((units-30)*25);}

else
{total_bill=(30*20)+(30*25)+((units-60)*30);}

printf("Your total water bill is %.2f Ksh\n",total_bill);

return 0;
}
