#pragma once

#include <vector>
#include "Component.h"

using namespace std;

class Entity
{
	int id;
public:
	Entity(){};

	void addComponent(Component comp){ m_components.push_back(comp); }
	void removeComponent(Component comp) {}
	vector<Component> getComponents(){ return m_components; }

protected:
	vector<Component> m_components;
};

class Player : public Entity
{
public:
	Player() :Entity(){}
};

class Cat : public Entity
{
public:
	Cat() :Entity(){}
};

class Dog : public Entity
{
public:
	Dog() :Entity(){}
};

class Alien : public Entity
{
public:
	Alien() :Entity(){}
};