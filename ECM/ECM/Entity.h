#pragma once

#include <vector>
#include "Component.h"
#include "HealthComponent.h"

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