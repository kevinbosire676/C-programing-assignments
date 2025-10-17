  /*
NAME:KEVIN ONSONGO BOSIRE
REG NO:PA106/G/29041/25.
Description:Programme to check if one is eligible to withdraw money in the bank
*/
#include<stdio.h>
int main(){
    float balance,withdrawal;
    printf("What is your bank balance ?\n");
        scanf("%f",&balance);
    while(balance>0){
        printf("Enter the amount you want to withdraw :\n");
        scanf("%f",&withdrawal);
        balance=balance-withdrawal;
        if(balance>0){printf("Your balance is %0.2f \n",balance);}
        else{printf("Sorry you cant withdraw");
        }
    }
    return 0;
}