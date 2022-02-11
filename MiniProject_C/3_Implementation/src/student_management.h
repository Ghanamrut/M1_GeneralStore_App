/**
 * @file student_management.h
 * @author Ghanamrut
 * @brief Header file for adding student details,finding student details by roll no,by first name,by course,to display total no of students and delete a student Function
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __STUDENT_MANAGEMENT_H__
#define __STUDENT_MANAGEMENT_H__
extern int i;
// Structure to store the student details
struct sinfo {
	char first_name[50];
	char last_name[50];
	int roll_no;
	float cgpa;
	int courseid[10];
} st[55];
/**@brief takes in student details first name, last name, roll no and course codes*/
void add_student();
/**@brief takes in student's roll no and provides the student details on checking roll no
   @param input roll no of the student whose details are to be found*/
void find_roll_no();
/**@brief takes in student's first name and provides the student details on checking first name
   @param input first name of the student whose details are to be found*/
void find_firstname();
/**@brief takes in student's course and provides the student details on checking course id
   @param input course id of the student whose details are to be found*/
void find_course();
/**@brief displays the no of students in the record*/
void total_no_s();
/**@brief deletes the student (with the roll no entered) from the record
   @param input roll no of the student whose details are to be deleted*/
void delete_s();
/**@brief displays the marks of a student (calculated from cgpa) with entered roll no
   @param input roll no of the student whose marks are to be found*/
float marks_s();
/**@brief displays the no of function in form of options in a menu for the user to choose*/
void menu();
#endif  /* __STUDENT_MANAGEMENT_H__  */