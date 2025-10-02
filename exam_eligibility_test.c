/*
Date: 2-10-2025
Name: Kevin Onsongo Bosire
Reg No: PA106/G/29041/25
Description:eligibility for an exam
*/
#include <stdio.h>
int main(){
float attendance ,average_marks;

printf("Please enter attendance of the student: ");
scanf("%d",&attendance);

printf("please enter the students marks: ");
scanf("%d",&average_marks);

if(attendance > 75 && average_marks > 40)
{printf("Student is eligible for exams.");}
else
{printf("Student is not eligible for exams. ");}

return 0;
}
