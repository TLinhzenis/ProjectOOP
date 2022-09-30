#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "Game.h"
#include "Ship.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class bulletShip:public Position {
	private:
		int speed=5;
//		int height=20,width=4;
		bool active=false;
	public:
		bulletShip();
		void checkFire(playerShip a);
		void move ();
		void draw (RenderWindow& app);
};

#endif