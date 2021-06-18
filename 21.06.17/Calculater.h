#pragma once

#include <iostream>

class Calculater
{
public:
	Calculater();
	~Calculater();

	void print(int i, int j);
	void print(float i, float j);
	void print(float i, float j,float k);
	void print(int i, int j, int k);
	void print(int i, char j);
};

