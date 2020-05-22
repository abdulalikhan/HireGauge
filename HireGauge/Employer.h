#pragma once
#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "Person.h"
#include <string>
using namespace std;
class Employer :
	public Person
{
private:
	string jobtitle;
	string companyname;
	string phonenum;
	string employees;
public:
	Employer(void);
	Employer(int, string, string, string, string, string, string, string, string, string, string, string);
	string getMemberType(void);
	void setMemberType(string);
	void setjobtitle(string);
	string getjobtitle(void);
	void setcompanyname(string);
	string getcompanyname(void);
	void setphonenum(string);
	string getphonenum(void);
	void setemployees(string);
	string getemployees(void);
};

#endif

