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
	char fname[50];
	char lname[50];
	int roll;
	float cgpa;
	int cid[10];
} st[55];
/**
 * @brief Funtion to find the sum of two complex numbers
 * 
 *
 *
 *  
 * @return result of the sum of the two complex numbers
 */
void add_student();
void find_roll_no();
void find_firstname();
void find_course();
void total_no_s();
void delete_s();
void menu();
#endif  /* __STUDENT_MANAGEMENT_H__  */