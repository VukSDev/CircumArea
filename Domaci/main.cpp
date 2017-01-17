#include <iostream>
#include <cstdio>
#include "CircArea.h"

void GetValues();
void PrintResults();

CircArea CR;
float r, a, b;

int main()
{
	GetValues();
	PrintResults();
	
	system("PAUSE");
	return 0;
}

//gets the values of the circle and rectangle from the user
void GetValues()
{
	//gets the value of the circle radius from the user
	std::cout << "Welcome to the circle and rectangle circumference and area calculator!\n\n" << "Please enter the value of the circle radius: \n";
	std::cin >> r;

	//gets the value of sides of the rectangle from the user
	std::cout << "\n" << "Now enter the value of both sides of the rectangle: \n";
	std::cin >> a >> b;
}

//print the results
void PrintResults()
{
	std::cout << "\nThe circumference of the circle whose radius is " << r << " equals: " << CR.GetCircCircum(r) << "\n\n" << "The area of the circle whose radius is " << r << " equals: " << CR.GetCircArea(r) << "\n" << std::endl;
	std::cout << "The circumference of the rectangle whose one side is " << a << ", and the second side is " << b << " equals: " << CR.GetRectCircum(a, b) << "\n" << "The area of the rectangle whose one side is " << a << ", and the second side is " << b << " equals: " << CR.GetRectArea(a, b) << "\n" << std::endl;
}
