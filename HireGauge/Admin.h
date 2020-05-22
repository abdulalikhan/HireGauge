#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"
#include <string>
using namespace std;
class Admin :
	public Person
{
public:
	Admin(void);
	Admin(int, string, string, string);
	string getMemberType(void);
	void setMemberType(string);
};

#endif

