#pragma once

#include "Component.h"

class HealthComponent: Component
{
public:
	HealthComponent() : Component(), m_health(100){ m_type = "health"; }

	int getHealth(){ return m_health; }
	void setHealth(int health){ this->m_health = health; }

private:
	int m_health;
};