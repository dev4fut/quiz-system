#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include "..\models\user.h"
#include "..\models\question.h"

using namespace std;

/**
 * @brief Provides data for the application to use
 * List of users, grades, subjects, questions, etc.
 */

class Database
{
    /* data */
    User users[10];
    Grade grades[10];
    Subject subjects[10];
    Question questions[1000];

public:

    /* constructor */
    Database();

    /* show list*/
    void showListGrade();
    void showListUser();
    void showListSubject();
    void showListQuestion();

    /* get list*/
    User *getListUser();
    Grade *getListGrade();
    Subject *getListSubject();
    Question *getListQuestion();

    /* get list size*/
    int getListUserSize();
    int getListGradeSize();
    int getListSubjectSize();
    int getListQuestionSize();

    /* get entity by id*/
    User *getUserById(int id);
    Grade *getGradeById(int id);
    Subject *getSubjectById(int id);
    Question *getQuestionById(int id);

    /* get entity by name*/
    User *getUserByUsername(string name);
    Grade *getGradeByName(string name);
    Subject *getSubjectByName(string name);

    /* add entity*/
    void addUser(User user);
    void addGrade(Grade grade);
    void addSubject(Subject subject);
    void addQuestion(Question question);

    /* update entity*/
    void updateUser(int id);
    void updateGrade(int id);
    void updateSubject(int id);
    void updateQuestion(int id);

    /* delete entity*/
    void deleteUser(int id);
    void deleteGrade(int id);
    void deleteSubject(int id);
    void deleteQuestion(int id);

    /* check entity*/
    bool checkUser(User user);
    bool checkGrade(Grade grade);
    bool checkSubject(Subject subject);
    bool checkQuestion(Question question);
};

static Database db;

#endif