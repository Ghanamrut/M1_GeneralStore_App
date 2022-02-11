#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_management.h"
int i=0;
float marks_s(int roll);
void main()
{
	int ch, cnt,roll;
	char a[50];
	while (i = 1) {
		menu();
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			add_student();
			break;
		case 2:
		    printf("Enter the student roll no\n");
			scanf("%d", &roll);
			find_roll_no(roll);
			break;
		case 3:
		    printf("Enter the First Name of the student\n");
	    	scanf("%s", a);
			find_firstname(a);
			break;
		case 4:
			find_course();
			break;
		case 5:
			total_no_s();
			break;
		case 6:
			printf("Enter the student roll no\n");
			scanf("%d", &roll);
			delete_s(roll);
			break;
		case 7:
			printf("Enter the student roll no\n");
			scanf("%d", &roll);
			float marks=marks_s(roll);
			printf("%.2f\n",marks);
			break;	
		case 8:
			exit(0);
			break;
		}
	}
}