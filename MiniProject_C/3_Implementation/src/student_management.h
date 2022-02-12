/**
 * @file student_management.h
 * @author Ghanamrut
 * @brief Header file for adding student details,finding student details by roll no,by first name,by course,to display total no of students and delete a student Function
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __STUDENT_MANAGEMENT_H__
#define __STUDENT_MANAGEMENT_H__


char name_s[20][20]={"ashish sharma","sumona dey","suman mehta","gaurav kapoor","balaji swamy","nikita gandhi","shankar kumar","saurav das","arshil sayyad","rohit rathod","ram yadav","muskan khanna","adesh kadam","samyak srivastava","nikhil desale","aditya patil","rohit patil","siddhi dusane","tanuja kumari","abhishek ahvad"};
int roll_no[20]={301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,320};
int physics[20]={30,56,76,80,12,45,34,89,22,18,65,42,38,10,95,44,20,20,19,24};
int chemistry[20]={34,89,22,18,10,95,19,24,49,58,72,33,21,19,77,68,53,44,12,55};
int biology[20]={21,19,77,80,12,45,44,20,20,78,26,48,19,24,42,56,22,18,89,78};
int maths[20]={78,26,48,89,22,18,65,34,89,22,58,72,33,24,49,58,77,68,53,65};
/**@brief takes in student details first name, last name, roll no and course codes*/
/*void add_student();
/**@brief takes in student's roll no and provides the student details on checking roll no
   @param input roll no of the student whose details are to be found*/
//void find_roll_no();
/**@brief takes in student's first name and provides the student details on checking first name
   @param input first name of the student whose details are to be found*/
//void find_firstname();
/**@brief takes in student's course and provides the student details on checking course id
   @param input course id of the student whose details are to be found*/
//void find_course();
/**@brief displays the no of students in the record*/
//void total_no_s();
/**@brief deletes the student (with the roll no entered) from the record
   @param input roll no of the student whose details are to be deleted*/
//void delete_s();
/**@brief displays the marks of a student (calculated from cgpa) with entered roll no
   @param input roll no of the student whose marks are to be found*/
//float marks_s();
/**@brief displays the no of function in form of options in a menu for the user to choose*/
//void menu();
#endif  /* __STUDENT_MANAGEMENT_H__  */