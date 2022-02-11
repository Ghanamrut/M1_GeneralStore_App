#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_management.h"
int i=0;
void main()
{
	int choice, count;
	while (i = 1) {
		menu();
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find_roll_no();
			break;
		case 3:
			find_firstname();
			break;
		case 4:
			find_course();
			break;
		case 5:
			total_no_s();
			break;
		case 6:
			delete_s();
			break;
		case 7:
			exit(0);
			break;
		}
	}
}