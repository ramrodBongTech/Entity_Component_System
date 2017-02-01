#pragma once

#include "Component.h"
#include "BasicTypes.h"

class PositionComponent : Component
{
public:
	PositionComponent() : Component(), m_position(Point2D(0, 0)){ m_type = "position"; }

	Point2D getPosition(){ return m_position; }
	void setPosition(Point2D position){ this->m_position = position; }

private:
	Point2D m_position;
};