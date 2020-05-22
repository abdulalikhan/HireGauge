#pragma once
#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>
#include <string>
using namespace std;
class Question
{
private:
	int id;
	int assessment_id;
	string question_text;
	string option1;
	string option2;
	string option3;
	string option4;
	string correct_option;
	string skilltag;
public:
	Question(void);
	Question(int, int, string, string, string, string, string, string, string);
	int getid(void);
	int getassessment_id(void);
	void setassessment_id(int);
	string getquestion_text(void);
	void setquestion_text(string);
	string getoption1(void);
	string getoption2(void);
	string getoption3(void);
	string getoption4(void);
	void setoption1(string);
	void setoption2(string);
	void setoption3(string);
	void setoption4(string);
	string getcorrect_option(void);
	void setcorrect_option(string);
	string getskilltag(void);
	void setskilltag(string);
};

#endif
