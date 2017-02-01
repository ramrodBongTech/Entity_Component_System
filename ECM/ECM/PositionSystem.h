#pragma once

class PositionSystem
{
public:
	void addEntity(Entity ent){ m_entities.push_back(ent); }
	void update()
	{
		for (int i = 0; i < m_entities.size(); i++)
		{
			vector<Component> _comps = m_entities[i].getComponents();
			for (int i = 0; i < _comps.size(); i++)
			{
				if (_comps[i].getType() == "position")
				{
					cout << "updated position component!!" << endl;
				}
			}
		}
	}
private:
	vector<Entity> m_entities;
};