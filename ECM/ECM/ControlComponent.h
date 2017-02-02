#pragma once

#include "Component.h"

class ControlComponent : public Component
{
public:
	ControlComponent(){ m_type = "control"; }
};