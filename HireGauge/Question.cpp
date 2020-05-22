#include "StdAfx.h"
#include "Question.h"

#include <string>

using namespace std;

Question::Question(void)
{
}

Question::Question(int id, int assessment_id, string question_text, string option1, string option2, string option3, string option4, string correct_option, string skilltag)
{
	this->id = id;
	this->assessment_id = assessment_id;
	this->question_text = question_text;
	this->option1 = option1;
	this->option2 = option2;
	this->option3 = option3;
	this->option4 = option4;
	this->correct_option = correct_option;
	this->skilltag = skilltag;
}

int Question::getid(void)
{
	return id;
}

int Question::getassessment_id(void)
{
	return assessment_id;
}

void Question::setassessment_id(int assessment_id)
{
	if (assessment_id<0)
	{
		this->assessment_id = 0;
	}else{
		this->assessment_id = assessment_id;
	}
}

string Question::getquestion_text(void)
{
	return question_text;
}

void Question::setquestion_text(string question_text)
{
	if (question_text == "")
	{
		this->question_text = "Default question text";
	}else{
		this->question_text = question_text;
	}
}

string Question::getoption1(void)
{
	return option1;
}

string Question::getoption2(void)
{
	return option2;
}

string Question::getoption3(void)
{
	return option3;
}

string Question::getoption4(void)
{
	return option4;
}

void Question::setoption1(string option1)
{
	if (option1 == "")
	{
		this->option1 = "Default";
	}else{
		this->option1 = option1;
	}
}

void Question::setoption2(string option2)
{
	if (option2 == "")
	{
		this->option2 = "Default";
	}else{
		this->option2 = option2;
	}
}

void Question::setoption3(string option3)
{
	if (option3 == "")
	{
		this->option3 = "Default";
	}else{
		this->option3 = option3;
	}
}

void Question::setoption4(string option4)
{
	if (option4 == "")
	{
		this->option4 = "Default";
	}else{
		this->option4 = option4;
	}
}

string Question::getcorrect_option(void)
{
	return correct_option;
}

void Question::setcorrect_option(string correct_option)
{
	if (correct_option == ""){
		this->correct_option = "Default";
	}else{
		this->correct_option = correct_option;
	}
}

string Question::getskilltag(void)
{
	return skilltag;
}

void Question::setskilltag(string skilltag)
{
	if (skilltag == ""){
		this->skilltag = "default";
	}else{
		this->skilltag = skilltag;
	}
}