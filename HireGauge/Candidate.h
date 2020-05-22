#pragma once
#ifndef CANDIDATE_H
#define CADIDATE_H
#include "Person.h"
#include <string>
using namespace std;
class Candidate :
	public Person
{
public:
	Candidate(void);
	Candidate(int, string, string, string, string, string, string, string);
	string getMemberType(void);
	void setMemberType(string);
};

#endif