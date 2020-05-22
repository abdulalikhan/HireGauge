#include "StdAfx.h"
#include "Candidate.h"
#include <string>
using namespace std;

Candidate::Candidate(void)
{
}

Candidate::Candidate(int id, string firstname, string lastname, string membertype, string email, string password, string dob, string gender): Person(id, firstname, lastname, membertype, email, password, dob, gender)
{
}

string Candidate::getMemberType(void)
{
	return membertype;
}

void Candidate::setMemberType(string membertype)
{
	if (membertype == "")
	{
		this->membertype = "Candidate";
	}else{
		this->membertype = membertype;
	}
}
