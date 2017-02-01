#include "stdafx.h"
#include "Entity.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include "HealthSystem.h"
#include "PositionSystem.h"

int main()
{
	Entity _player;
	Entity _cat;
	Entity _dog;
	Entity _alien;

	_player.addComponent(HealthComponent());
	_player.addComponent(PositionComponent());
	_player.addComponent(ControlComponent());

	_cat.addComponent(HealthComponent());
	_cat.addComponent(PositionComponent());

	_dog.addComponent(HealthComponent());
	_dog.addComponent(PositionComponent());

	_alien.addComponent(HealthComponent());
	_alien.addComponent(PositionComponent());

	HealthSystem _hs;
	_hs.addEntity(_player);
	_hs.addEntity(_cat);
	_hs.addEntity(_dog);
	_hs.addEntity(_alien);

	PositionSystem _ps;
	_ps.addEntity(_player);
	_ps.addEntity(_cat);
	_ps.addEntity(_dog);
	_ps.addEntity(_alien);

	while (true)
	{
		_hs.update();
		_ps.update();
	}

	return 0;
}

