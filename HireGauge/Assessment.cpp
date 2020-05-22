#include "StdAfx.h"
#include "Assessment.h"


Assessment::Assessment(void)
{
}

Assessment::Assessment(int id, int opening_id, string title, int time_limit, int no_of_questions)
{
	this->id = id;
	this->opening_id = opening_id;
	this->title = title;
	this->time_limit = time_limit;
	this->no_of_questions = no_of_questions;
}

Assessment::Assessment(int id, int opening_id)
{
	this->id = id;
	this->opening_id = opening_id;
}

int Assessment::getid(void)
{
	return id;
}
int Assessment::getopening_id(void)
{
	return opening_id;
}
string Assessment::gettitle(void)
{
	return title;
}
void Assessment::settitle(string title)
{
	this->title = title;
}
int Assessment::gettime_limit(void)
{
	return time_limit;
}
void Assessment::settime_limit(int time_limit)
{
	this->time_limit = time_limit;
}
int Assessment::getno_of_questions(void)
{
	return no_of_questions;
}
void Assessment::setno_of_questions(int no_of_questions)
{
	this->no_of_questions = no_of_questions;
}
