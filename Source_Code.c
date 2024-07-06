/*
 	* Author:		Manav
 	* Module:   		Getting Started with Programming in C
 	* Topic:		Report Card Generation Assignment
*/

#include <stdio.h>
#include <unistd.h>

int main()

{

	//DECLARING VARIABLES


	char name[40];
	char sec, grade;
	int totalMarks, std, math, eng, hindi, sci, sst;


	//TAKING INPUTS


	printf("Enter the STUDENT NAME: ");
	fflush(stdout);
	scanf("%[^\n]%*c", name);

	printf("\n");
	sleep(1);


	printf("Enter the STANDARD: ");
	fflush(stdout);
	scanf("%d", &std);

	printf("\n");
	sleep(1);


	printf("Enter the SECTION: ");
	fflush(stdout);
	scanf("%c", &sec);

	printf("\n");
	sleep(1);

	puts("Enter the MARKS secured in each subject in front of it...");

	printf("\n");
	sleep(1);

	while ((getchar()) != '\n');

	printf("MATHEMATICS: ");
	fflush(stdout);
	scanf("%d", &math);

	printf("\n");
	sleep(1);

	while ((getchar()) != '\n');

	printf("ENGLISH: ");
	fflush(stdout);
	scanf("%d", &eng);

	printf("\n");
	sleep(1);

	while ((getchar()) != '\n');

	printf("HINDI: ");
	fflush(stdout);
	scanf("%d", &hindi);

	printf("\n");
	sleep(1);

	while ((getchar()) != '\n');

	printf("SCIENCE: ");
	fflush(stdout);
	scanf("%d", &sci);

	printf("\n");
	sleep(1);

	while ((getchar()) != '\n');

	printf("SOCIAL SCIENCE: ");
	fflush(stdout);
	scanf("%d", &sst);


	//CALCULATING TOTAL MARKS


	totalMarks = math + eng + hindi + sci + sst;


	//ASSIGNING GRADES


	if (totalMarks>=450 && totalMarks<=500)
		{
			grade = 'A';
		}

	else if (totalMarks>=400 && totalMarks<=499)
		{
			grade = 'B';
		}

	else if (totalMarks>=350 && totalMarks<=399)
		{
			grade = 'C';
		}

	else if (totalMarks>=300 && totalMarks<=349)
		{
			grade = 'D';
		}

	else if (totalMarks>=200 && totalMarks<=299)
		{
			grade = 'E';
		}

	else if (totalMarks>=0 && totalMarks<=200)
		{
			grade = 'F';
		}

	else
		{
			puts("Invalid Marks!\n");
		}

	printf("\n");
	puts("Generating Final Report Card...");
	printf("\n");
	fflush(stdout);
	sleep(3);

	//FINAL REPORT CARD OUTPUT

	puts("----------------------------------------\n");
	puts("       Jawahar Navodaya Vidyalaya       \n");
	puts("           Annual Report Card           \n");

	sleep(2);

	printf("Name: %s \n", name);
	printf("Standard: %d \n", std);
	printf("Section: %c \n", sec);

	puts("\n");

	puts("Marks Secured out of 100");
	printf("Mathematics: %d\n", math);
	printf("English: %d\n", eng);
	printf("Hindi: %d\n", hindi);
	printf("Science: %d\n", sci);
	printf("Social Science: %d\n", sst);

	puts("\n");

	printf("Total marks secured: %d\n", totalMarks);
	printf("Grade: %c\n", grade);

	puts("----------------------------------------\n");

	return 0;
}



