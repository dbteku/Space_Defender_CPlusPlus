#include "Point.h"

#ifndef SHIP_H
#define SHIP_H
struct Ship
{
	Point Left;
	Point bottomLeft;
	Point Right;
	Point bottomRight;
	Point Center;
	Point Gun1;
	Point Gun2;
	Point gPoint1;
	Point gPoint2;
	float spawnX = 500;
	float spawnY = 700;


	Point meBase;
	Point velocity;
	Ship() :
		Left(-40, 40),
		bottomRight(0, -40),
		Right(40, 40),
		bottomLeft(-5, 0),
		Center(0, 0),
		Gun1(0, -50),
		gPoint1(0, -40),

		meBase(spawnX, spawnY)
	{}
	void drawThyself(Core::Graphics& g)
	{
		drawLine(g, meBase + Left, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + Right);
		drawLine(g, meBase + Left, meBase + Center);
		drawLine(g, meBase + Right, meBase + Center);
		drawLine(g, meBase + Right, meBase + Center);
		drawLine(g, meBase + gPoint1, meBase + Gun1);

	}
	void integrate()
	{
		meBase = meBase + velocity;
	}
};

#endif SHIP_H