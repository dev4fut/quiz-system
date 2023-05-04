#ifndef DATA_H
#define DATA_H

#include <string>
#include "..\models\user.h"
#include "..\models\grade.h"
#include "..\models\subject.h"
#include "..\models\question.h"

using namespace std;

/**
 * @brief Provides data for the application to use
 * List of users, grades, subjects, questions, etc.
 */

/* data */
inline User* users[10];
inline Grade* grades[10];
inline Subject* subjects[10];
inline Question* questions[1000];

/* functions */

/* initial*/
void initListUser();
void initListSubject();
void initListQuestion();

/* show list*/
void showListUser();
void showListSubject();
void showListQuestion();

#endif