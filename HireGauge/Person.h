#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
protected:
	int id;
	string firstname;
	string lastname;
	string membertype;
	string email;
	string password;
	string dob;
	string gender;
public:
	Person(void);
	Person(int, string, string, string);
	Person(int, string, string, string, string, string, string, string);
	virtual string getMemberType(void) = 0;
	void setid(int);
	int getid(void);
	void setfirstname(string);
	string getfirstname(void);
	void setlastname(string);
	string getlastname(void);
	void setemail(string);
	string getemail(void);
	void setpassword(string);
	void setdob(string);
	string getdob(void);
	void setgender(string);
	string getgender(void);
	// Declaring the following functions as "Virtual" to achieve late binding with Employer class instances
	virtual void setjobtitle(string);
	virtual string getjobtitle(void);
	virtual void setcompanyname(string);
	virtual string getcompanyname(void);
	virtual void setphonenum(string);
	virtual string getphonenum(void);
	virtual void setemployees(string);
	virtual string getemployees(void);
};

#endif
