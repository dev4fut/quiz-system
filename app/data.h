#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
#include "..\models\user.h"
#include "..\models\question.h"

using namespace std;

/**
 * @brief Provides data for the application to use
 * List of users, grades, subjects, questions, etc.
 */

/* data */
static User users[10];
static Grade grades[10];
static Subject subjects[10];
static Question questions[1000];

/* functions */

/* initial*/
void initListGrade();
void initListUser();
void initListSubject();
void initListQuestion();

/* show list*/
void showListGrade();
void showListUser();
void showListSubject();
void showListQuestion();

#endif