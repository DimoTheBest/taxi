#ifndef AUTO_H
#define AUTO_H

#include <iostream>

using namespace std;

class Auto
{
public:
	Auto();
	virtual ~Auto() {};
	void manhattanDistance();

private:
	int velocita = 50;//km/h
};

Auto::Auto()
{
}
void Auto::manhattanDistance()
{
}

#endif // !AUTO_H
