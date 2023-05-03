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
User users[10];
Grade grades[10];
Subject subjects[10];
Question questions[1000];

void initListSubject();

#endif