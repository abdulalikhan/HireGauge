#include "StdAfx.h"
#include "Person.h"
#include <string>
using namespace std;
Person::Person(void)
{
}

Person::Person(int id, string membertype, string email, string password)
{
	// Invalid values that are passed to constructors are handled by chalking them up/down to the nearest valid values/default values
	if (id<0){
		this->id = 0;
	}else{
		this->id = id;
	}
	if (membertype == ""){
		this->membertype = "Candidate";
	}else{
		this->membertype = membertype;
	}
	if (email == ""){
		this->email = "example@test.com";
	}else{
		this->email = email;
	}
	if (password == ""){
		this->password = "123456";
	}else{
		this->password = password;
	}
}

Person::Person(int id, string firstname, string lastname, string membertype, string email, string password, string dob, string gender)
{
	// Invalid values that are passed to constructors are handled by chalking them up/down to the nearest valid values/default values
	if (id<0){
		this->id = 0;
	}else{
		this->id = id;
	}
	if (firstname == ""){
		this->firstname = "Default";
	}else{
		this->firstname = firstname;
	}
	if (lastname == ""){
		this->lastname = "User";
	}else{
		this->lastname = lastname;
	}
	if (membertype == ""){
		this->membertype = "Candidate";
	}else{
		this->membertype = membertype;
	}
	if (email == ""){
		this->email = "example@test.com";
	}else{
		this->email = email;
	}
	if (password == ""){
		this->password = "123456";
	}else{
		this->password = password;
	}
	if (dob == ""){
		this->dob = "01/01/1995";
	}else{
		this->dob = dob;
	}
	if (gender == ""){
		this->gender = "Other";
	}else{
		this->gender = gender;
	}
}

void Person::setid(int id)
{
	if (id<0){
		this->id = 0;
	}else{
		this->id = id;
	}
}

int Person::getid(void)
{
	return id;
}

void Person::setfirstname(string firstname)
{
	if (firstname == ""){
		this->firstname = "Default";
	}else{
		this->firstname = firstname;
	}
}

string Person::getfirstname(void)
{
	return firstname;
}

void Person::setlastname(string lastname)
{
	if (lastname == ""){
		this->lastname = "User";
	}else{
		this->lastname = lastname;
	}
}

string Person::getlastname(void)
{
	return lastname;
}

void Person::setemail(string email)
{
	if (email == ""){
		this->email = "example@test.com";
	}else{
		this->email = email;
	}
}

string Person::getemail(void)
{
	return email;
}

void Person::setpassword(string password)
{
	if (password == ""){
		this->password = "123456";
	}else{
		this->password = password;
	}
}

void Person::setdob(string dob)
{
	if (dob == ""){
		this->dob = "01/01/1995";
	}else{
		this->dob = dob;
	}
}

string Person::getdob(void)
{
	return dob;
}

void Person::setgender(string gender)
{
	if (gender == ""){
		this->gender = "Other";
	}else{
		this->gender = gender;
	}
}

string Person::getgender(void)
{
	return gender;
}

void Person::setjobtitle(string jobtitle)
{
	// Included to achieve late binding
}

string Person::getjobtitle(void)
{
	// Included to achieve late binding
	string dummy = "Parent class";
	return dummy;
}

void Person::setcompanyname(string companyname)
{
	// Included to achieve late binding
}

string Person::getcompanyname(void)
{
	// Included to achieve late binding
	string dummy = "Parent class";
	return dummy;
}

void Person::setphonenum(string phonenum)
{
	// Included to achieve late binding
}

string Person::getphonenum(void)
{
	// Included to achieve late binding
	string dummy = "Parent class";
	return dummy;
}

void Person::setemployees(string employees)
{
	// Included to achieve late binding
}

string Person::getemployees(void)
{
	// Included to achieve late binding
	string dummy = "Parent class";
	return dummy;
}