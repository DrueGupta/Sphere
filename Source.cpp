#include <iostream>
#include "Sphere.h"
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

int main()
{

}
