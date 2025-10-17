 /*Name: KEVIN ONSONGO BOSIRE
  Registration No: PA106/G/28764/25
  Description:Programme to check if the user inputs the correct password by the use of a do while loop
*/
 #include<stdio.h>

int main()
 {
 int password=1234;
 int userpassword;
 do {printf("Input your password :");
     scanf("%d",&userpassword);}
     while(userpassword != password);
     printf("Correct password!");
 return 0;

}