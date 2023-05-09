#include <iostream>
#include <string>
#include "question.h"

using namespace std;

Question::Question()
{
    id = 0;
    question = "";
    for (int i = 0; i < 10; i++)
    {
        this->answers[i] = "";
        this->corrects[i] = -1;
    }
    level = 0;
}

void Question::init(int id, string question, string* answers, int numAns, int* corrects, int numCor, string explanation, int level, Subject *subject)
{
    this->id = id;
    this->question = question;
    for (int i = 0; i < numAns; i++)
    {
        this->answers[i] = answers[i];
    }

    for (int i = 0; i < numCor; i++)
    {
        this->corrects[i] = corrects[i];
    }
    this->explanation = explanation;
    this->level = level;
    this->subject = subject;
}

void Question::input()
{
    int n;
    cout << "Enter question: " << endl;
    cin >> question;
    do 
    {
        cout << "How many Answer (more than 1 and less than 11): " << endl;
        cin >> n;
    } while (n > 1 && n < 11);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter answer" << i+1 << ": " << endl;
        cin >> answers[i];
    }
    
    cout << "Enter correct answer (separated by semicolon): " << endl;
    string allAnswer = "";
    getline(cin, allAnswer);
    int i = 0;
    while (allAnswer[i] != '\0')
    {
        if (allAnswer[i] != ';')
        {
            int answer = allAnswer[i] - '1';
            corrects[i] = answer;
        }
        i++;
    }

    cout << "Enter explanation: " << endl;
    cin >> explanation;

    cout << "Enter level (from 1 to 5): " << endl;
    cin >> level;

    cout << "Enter subject: " << endl;
    // db.selectSubject();
}

void Question::output()
{
    cout << "Question: " << question << endl;
    int i = 0;
    while (answers[i] != "")
    {
        cout << i+1 << ": " << answers[i] << endl;
        i++;
    }
}

bool Question::checkAns(int answer)
{
    int i = 0;
    while (this->corrects[i] != -1)
    {
        if (this->corrects[i] == answer) return true;
        i++;
    }
    return false;
}

bool Question::inputAns()
{
    cout << "Enter all correct answer (separated by semicolon): " << endl;
    string allAnswer = "";
    getline(cin, allAnswer);
    int i = 0;
    while (allAnswer[i] != '\0')
    {
        if (allAnswer[i] != ';')
        {
            int answer = allAnswer[i] - '1';
            if (this->checkAns(answer) == false) return false;
        }
        i++;
    }
    return true;
}

void Question::outputAns()
{
    int i = 0;
    while (this->corrects[i] != -1)
    {
        cout << ">>>The correct answers is:\n" << i+1 << ": " << this->answers[this->corrects[i]] << endl;
        i++;
    }
    cout << "<<<Exp: " << this->explanation << endl;
}

bool Question::doQuest()
{
    this->output();
    if(this->inputAns() == true)
    {
        cout << "Correct!" << endl;
        return true;
    }
        cout << "Wrong!" << endl;
        this->outputAns();
        return false;
}

void Question::update()
{
    string temp;
    cout << "Enter Question: " << endl;
    cin >> temp;
    if (temp != " ") question = temp;
    for (int i = 0; i < 11; i++)
    {
        cout << "Answer: " << endl;
        cin >> temp;
        if (temp != " ") answers[i] = temp;
    }
    
}

void Question::remove()
{
    delete this;
}