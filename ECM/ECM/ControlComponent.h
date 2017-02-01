#pragma once

#include "Component.h"

class ControlComponent : Component
{
public:
	ControlComponent() : Component(){ m_type = "control"; }
};