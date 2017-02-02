#pragma once

#include "Component.h"

class PositionComponent : public Component
{
public:
	PositionComponent() : m_position(pair<float, float>(0, 0)){ m_type = "position"; }

	pair<float, float> getPosition(){ return m_position; }
	void setPosition(pair<float, float> position){ this->m_position = position; }

private:
	pair<float, float> m_position;
};