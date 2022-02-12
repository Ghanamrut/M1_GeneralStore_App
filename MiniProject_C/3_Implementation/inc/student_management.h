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
/**@brief takes in student name and returns roll no*/
/**@param input name of student whose roll no is to be found*/
int ret_roll(char name[]);
/**@brief takes in student name and returns marks 1.e total of all subjects*/
/**@param input name of student whose marks are to be found*/
int marks(char name[]);
/**@brief takes choice of subject and returns average performance score of all students /
/**@param input choice of subject of which average score is to be found*/
int ret_subavg(int ch);
/**@brief takes in two students roll numbers and returns the student roll no with higher marks*/
/**@param input roll numbers of students whose marks are to be compared*/
int compare(int roll1,int roll2);

#endif  /* __STUDENT_MANAGEMENT_H__  */