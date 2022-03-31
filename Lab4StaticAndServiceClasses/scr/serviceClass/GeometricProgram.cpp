#include "GeometricProgram.h"

void GeometricProgram::WriteRectangleToConsole(const Rectangle& rectangle)
{
	std::cout << "Rectangle: ("
		<< "X = " << rectangle.GetCentreX() << ", "
		<< "Y = " << rectangle.GetCentreY() << ", "
		<< "Length = " << rectangle.GetLength() << ", "
		<< "Width = " << rectangle.GetWidth() << ");\n";
}

void GeometricProgram::WriteRingToConsole(const Ring& ring)
{
	std::cout << "Ring: ("
		<< "X = " << ring.GetCentre().GetX() << ", "
		<< "Y = " << ring.GetCentre().GetY() << ", "
		<< "Inner Radius = " << ring.GetInnerRadius() << ", "
		<< "Outer Radius = " << ring.GetOuterRadius() << ");\n";
}

void GeometricProgram::WriteCollisionToConsole(const Rectangle& first, const Rectangle& second)
{
	WriteRectangleToConsole(first);
	WriteRectangleToConsole(second);
	if (CollisionManager::IsCollision(first, second))
	{
		std::cout << "Are collided.\n\n";
	}
	else
	{
		std::cout << "Aren't collided.\n\n";
	}
}

void GeometricProgram::WriteCollisionToConsole(const Ring& first, const Ring& second)
{
	WriteRingToConsole(first);
	WriteRingToConsole(second);
	if (CollisionManager::IsCollision(first, second))
	{
		std::cout << "Are collided.\n\n";
	}
	else
	{
		std::cout << "Aren't collided.\n\n";
	}
}

void GeometricProgram::PushRingToVector(const Point& iCentre, float iInnerRadius,
	float iOuterRadius, std::vector<Ring*>& oVector)
{
	try
	{
		Ring* ring = new Ring(iCentre, iInnerRadius, iOuterRadius);
		oVector.push_back(ring);
		std::cout << "Ring created.\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void GeometricProgram::DemoCollision()
{
	Rectangle rectangle1(0, 0, 200.0f, 400.0f);
	Rectangle rectangle2(600, 0, 200.0f, 400.0f);
	WriteCollisionToConsole(rectangle1, rectangle2);

	Rectangle rectangle3(0, 0, 10.0f, 10.0f);
	Rectangle rectangle4(5, 5, 10.0f, 10.0f);
	WriteCollisionToConsole(rectangle3, rectangle4);

	Ring ring1(0, 0, 5, 10);
	Ring ring2(15, 15, 5, 10);
	WriteCollisionToConsole(ring1, ring2);

	Ring ring3(0, 0, 0, 10);
	Ring ring4(5, 0, 5, 10);
	WriteCollisionToConsole(ring3, ring4);
}

void GeometricProgram::DemoRing()
{
	std::vector<Ring*> rings;
	PushRingToVector(Point(0.0f, 0.0f), 1.0f, 4.0f, rings);
	std::cout << "Rings count: " << Ring::GetAllRingsCount() << '\n';
	PushRingToVector(Point(3.0f, 4.0f), 0.0f, 8.0f, rings);
	std::cout << "Rings count: " << Ring::GetAllRingsCount() << '\n';
	PushRingToVector(Point(-4.0f, -3.0f), 16.0f, 8.0f, rings);
	std::cout << "Rings count: " << Ring::GetAllRingsCount() << '\n';
	PushRingToVector(Point(0.0f, 0.0f), 0.0f, 1.0f, rings);
	std::cout << "Rings count: " << Ring::GetAllRingsCount() << '\n';
	PushRingToVector(Point(0.0f, 0.0f), -16.0f, -8.0f, rings);
	std::cout << "Rings count: " << Ring::GetAllRingsCount() << "\n\n";
	
	for (int i = 0; i < rings.size(); ++i)
	{
		std::cout << "Ring " << i << " has area: " << rings[i]->CalculateArea() << '\n';
	}
	
	std::cout << "\nCount of rings before constructor: " << Ring::GetAllRingsCount() << '\n';
	Ring* ring = new Ring(Point(25.0f, 25.0f), 5.0f, 10.0f);
	std::cout << "Count of rings after constructor: " << Ring::GetAllRingsCount() << '\n';
	delete ring;
	std::cout << "Count of rings after destructor: " << Ring::GetAllRingsCount() << "\n\n";
}
