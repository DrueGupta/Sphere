#include <iostream>
#include "Shpere.h"
using namespace std;

double Sphere::getRadius()
{
	return radius;
}

void Sphere::setRadius(double radius)
{
	if (radius > 0)
		this->radius = radius;
	else
		cerr << "no negatives" << endl;
}

double Sphere::surfaceArea()
{
	return (4 * 3.14 * radius * radius);
}

double Sphere::volume()
{
	return ((4 / 3) * 3.14 * radius * radius * radius);
}

Sphere::Sphere()
{
	this->radius = 0;
}
