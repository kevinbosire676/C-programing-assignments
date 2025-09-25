/*
Name: Kevin Onsongo Bosire
Reg : PA106/G/29041/25
Description: simple program to enter and print data
*/
#include <stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);

int ID;
printf("Enter your ID: ");
scanf("%d",&ID);

int Height;
printf("Enter your height: ");
scanf("%d",&Height);

int bank_balance;
printf("Enter your bank balance: ");
scanf("%d",&bank_balance);

printf("Your age %d, ID %d, Height %d, bank_balance %d\n", age,ID,Height,bank_balance);

return 0;
}