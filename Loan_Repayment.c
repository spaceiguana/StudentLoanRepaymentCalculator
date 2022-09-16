// Loan_Repayment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int course_dur, mainten, tuition;
	printf("Please enter the duration of your course(years): ");
	scanf("%int",&course_dur);

	printf("Please enter your maintenance loan value per anum(£):  ");
	scanf("%int", &mainten);

	printf("Please enter your Tution fee value per anum(£): ");
	scanf("%int", &course_dur);

	int init_salary = 40000;
	// if salary>= 45000 
	//total interest= 6.3%
	//25000 or less = 0%

	int total = course_dur * ( mainten + tuition);

	printf("Your total debt amounts to :  %int", total);

	scanf("%*s");
}


