#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
	virtual double surface();
	virtual double perimeter();
};

#endif