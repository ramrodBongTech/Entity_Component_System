#pragma once

#include "Component.h"

class HealthComponent: public Component
{
public:
	HealthComponent() : m_health(100){ m_type = "health"; }

	int getHealth(){ return m_health; }
	void setHealth(int health){ this->m_health = health; }

private:
	int m_health;
};