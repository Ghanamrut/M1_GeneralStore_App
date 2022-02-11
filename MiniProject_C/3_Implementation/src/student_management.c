#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_management.h"
void menu()
{
    printf("Which Function you want to use?\n");
	printf("1. Add Student Details\n");
	printf("2. Find Student Details by Roll Number\n");
	printf("3. Find Student Details by First Name\n");
	printf("4. Find Student Details by Course Id\n");
	printf("5. Find the Total number of Students\n");
	printf("6. Delete the Students Details by Roll Number\n");
	printf("7. Display Marks of Roll Number\n");
	printf("8. Exit\n");
	printf("Enter your choice to find the task\n");  
}



void find_roll_no(int x)
{
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll_no) {
			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].first_name);
			printf(
				"The Last name is %s\n",
				st[i].last_name);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID of each course\n");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"The course ID are %d\n",
				st[i].courseid[j]);
		}
		break;
	}
}
void find_firstname(char a[50])
{
	
	
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].first_name, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[i].first_name);
			printf(
				"The Last name is %s\n",
				st[i].last_name);
			printf(
				"The Roll Number is %d\n ",
				st[i].roll_no);
			printf(
				"The CGPA is %f\n",
				st[i].cgpa);
			printf(
				"Enter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].courseid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name was not Found\n");
	}
}
void find_course()
{
	int id;
	printf("Enter the course ID \n");
	scanf("%d", &id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].courseid[d]) {

				printf(
					"The Students Details are\n");
				printf(
					"The First name is %s\n",
					st[i].first_name);
				printf(
					"The Last name is %s\n",
					st[i].last_name);
				printf(
					"The Roll Number is %d\n ",
					st[i].roll_no);
				printf(
					"The CGPA is %f\n",
					st[i].cgpa);

				c = 1;

				break;
			}
			else
				printf("The First Name was not Found\n");
		}
	}
}

void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first name of student\n");
	scanf("%s", st[i].first_name);
	printf("Enter the last name of student\n");
	scanf("%s", st[i].last_name);
	printf("Enter the Roll Number\n");
	scanf("%d", &st[i].roll_no);
	printf("Enter the CGPA you obtained\n");
	scanf("%f", &st[i].cgpa);
	printf("Enter the course ID of each course\n");
	for (int j = 0; j < 5; j++) {
		scanf("%d", &st[i].courseid[j]);
	}
	i = i + 1;
}

void total_no_s()
{
	printf("The total number of Student is %d\n",i);
	printf("\n you can have a max of 50 students\n");
	printf("you can have %d more students\n",50 - i);
}




void delete_s(int a)
{
	
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll_no) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number is removed \n");
}


float marks_s(int a)
{
	float marks;
	for (int j = 1; j <= i; j++) 
	{
		if (a == st[i].roll_no) 
		{
			marks= 8.8*st[j].cgpa;
		}
	}
	return marks;
}


