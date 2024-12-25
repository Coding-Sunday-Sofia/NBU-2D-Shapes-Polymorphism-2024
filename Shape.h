#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	virtual double surface() = 0;
	virtual double perimeter() = 0;
};

#endif