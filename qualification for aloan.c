/*
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description:qualification program for a loan
*/
#include <stdio.h>
int main(){
//Entering users details 

int age;
printf("Enter your age: ");
scanf("%d",&age);

int annual_income;
printf("Enter your annual income: ");
scanf("%d",&annual_income);

//verifying users details if they have met loan qualifications and producing results
if(age>21 && annual_income>21000){
printf("Congratulations you qualify for a loan.");
}
else{
printf("Unfortunately, we can't offer you a loan at this time.");
}

return 0;
}