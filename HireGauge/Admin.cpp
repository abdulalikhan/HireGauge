#include "StdAfx.h"
#include "Admin.h"
#include <string>

using namespace std;


Admin::Admin(void)
{
}

Admin::Admin(int id, string membertype, string email, string password): Person(id, membertype, email, password)
{
}

string Admin::getMemberType(void)
{
	return membertype;
}

void Admin::setMemberType(string membertype)
{
	if (membertype == "")
	{
		this->membertype = "Administrator";
	}else{
		this->membertype = membertype;
	}
}
