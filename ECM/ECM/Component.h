#pragma once

#include <string>
using namespace std;

class Component
{
public:
	Component(): m_type(""){}
	~Component(){}

	string getType(){ return m_type; }

protected:
	string m_type;
};