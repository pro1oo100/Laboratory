#include <iostream>
#include "figures.h"
//#include "math.h"
#include "circle.h"
#include "ractangle.h"
//#include "trapezoid.h"

int main() {
	std::cout << "1-Прямоугольник" << std::endl
	<< "2-Треугольник" << std::endl
	<< "3-Окружность" << std::endl
	<< "4-Трапеция" << std::endl;

	int input;
	std::cin >> input;

	switch (input) {
	case figures::RECTANGLE:
		ractangle();
		break;
	case figures::TRIANGLE:
//		math::testTriangle();
		break;
	case figures::CIRCLE:
		circle();
		break;
	case figures::TRAPEZOID:
//		trapezoid();
		break;
	default:
		std::cout << "Ошибка нужны цифры от 1 до 4" << std::endl;
		}
	return 0;
	}
