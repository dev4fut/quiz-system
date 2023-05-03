#include <iostream>
#include <string>
#include "question.h"

using namespace std;

Question::Question()
{
    id = 0;
    question = "";
    for (int i = 0; i < 11; i++)
    {
        this->answer[i] = "";
        this->correct[i] = 0;
    }
    level = 0;
}

void Question::input_question()
{
    int n;
    cout << "Enter question: " << endl;
    cin >> question;
    cout << "How many Answers: " << endl;
    cin >> n;
    do 
    {
        cout << "How many Answer: " << endl;
    } while (n > 1 && n < 11);
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter answer: " << endl;
        cin >> answer[i];
    }
    
}

void Question::output_question()
{
    cout << "Question: " << question << endl;
    cout << "Answer: " << answer << endl;
}
void Question::update_question()
{
    string temp;
    cout << "Enter Question: " << endl;
    cin >> temp;
    if (temp != " ") question = temp;
    for (int i = 0; i < 11; i++)
    {
        cout << "Answer: " << endl;
        cin >> temp;
        if (temp != " ") answer[i] = temp;
    }
}

void Question::delete_question()
{
    delete this;
}