#include <iostream>
#include "Sphere.h"
using namespace std;

int main(string sphere)
{
	Sphere a;
	a.setRadius(5);
	cout << a.surfaceArea() << endl;
	cout << a.volume() << endl;
}
