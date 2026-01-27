#pragma once
#include <iostream>
using namespace std;

class Sphere
{
private:
	double radius();
public:
	double getRadius();
	void setRadius(double radius);
	double voulume();
	double surfaceArea();
	Sphere();
};
