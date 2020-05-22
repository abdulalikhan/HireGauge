#include "StdAfx.h"
#include "Employer.h"
#include <string>
using namespace std;

Employer::Employer(void)
{
}

Employer::Employer(int id, string firstname, string lastname, string membertype, string email, string password, string dob, string gender, string jobtitle, string companyname, string phonenum, string employees): Person(id, firstname, lastname, membertype, email, password, dob, gender)
{
	// Invalid values that are passed to constructors are handled by chalking them up/down to the nearest valid values/default values
	if (jobtitle == ""){
		this->jobtitle = "Representative";
	}else{
		this->jobtitle = jobtitle;
	}
	if (companyname == ""){
		this->companyname = "XYZ Company";
	}else{
		this->companyname = companyname;
	}
	if (phonenum == "" || phonenum.size() != 11){
		this->phonenum = "03123456789";
	}else{
		this->phonenum = phonenum;
	}
	if (employees == ""){
		this->employees = "300+";
	}else{
		this->employees = employees;
	}
	
}

string Employer::getMemberType(void)
{
	return membertype;
}

void Employer::setMemberType(string membertype)
{
	if (membertype == "")
	{
		this->membertype = "Employer";
	}else{
		this->membertype = membertype;
	}
}

void Employer::setjobtitle(string jobtitle)
{
	if (jobtitle == ""){
		this->jobtitle = "Representative";
	}else{
		this->jobtitle = jobtitle;
	}
}

string Employer::getjobtitle(void)
{
	return jobtitle;
}

void Employer::setcompanyname(string companyname)
{
	if (companyname == ""){
		this->companyname = "XYZ Company";
	}else{
		this->companyname = companyname;
	}
}

string Employer::getcompanyname(void)
{
	return companyname;
}

void Employer::setphonenum(string phonenum)
{
	if (phonenum == "" || phonenum.size() != 11){
		this->phonenum = "03123456789";
	}else{
		this->phonenum = phonenum;
	}
}

string Employer::getphonenum(void)
{
	return phonenum;
}

void Employer::setemployees(string employees)
{
	if (employees == ""){
		this->employees = "300+";
	}else{
		this->employees = employees;
	}
}

string Employer::getemployees(void)
{
	return employees;
}
