/*Name: KEVIN ONSONGO BOSIRE
  Registration No: PA106/G/29041/25
  Description:Programme to allow a user to input a number between 
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int main() {
    srand(time(0)); //seed the random number
    float RandomNumber = (rand() %(20-1+1))+1;
    float UsersNumber;
    int count =0;
    while(RandomNumber != UsersNumber){
        printf("Guess a number which is between 1 and 20 : ");
        scanf("%f",&UsersNumber);
        if(UsersNumber < 1 || UsersNumber > 20 ){
            printf("Invalid number!");}
        else{ if(RandomNumber == UsersNumber){
            printf("Congratulations!\n");}
             else if(RandomNumber > UsersNumber ){printf("Too low !\n ");}
             else if(RandomNumber < UsersNumber ){printf ("Too high! \n");}

    }
        count=count+1;
    }
     printf("\nYou took %d tries to guess right",count);
    return 0;
}