#pragma once
#include <iostream>
#include <string>
using namespace std;
class Assessment
{
private:
	int id;
	int opening_id;
	string title;
	int time_limit;
	int no_of_questions;
public:
	Assessment(void);
	Assessment(int, int, string, int, int);
	Assessment(int, int);
	int getid(void);
	int getopening_id(void);
	string gettitle(void);
	void settitle(string);
	int gettime_limit(void);
	void settime_limit(int);
	int getno_of_questions(void);
	void setno_of_questions(int);
};

