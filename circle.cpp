#include <iostream>
#include <iomanip>
#include "circle.h"

void circle(){
	double radius = 0;
	int corner = 0;
	float pi = 3.14;
	std::cout << "Радиус окружности и угол для поиска прощади сектора"
	<< std::endl;
<<<<<<< HEAD
	if ((std::cin >> radius && radius > 0) && (std::cin >> corner && corner > -1 && corner < 361)) {
=======
	if ((std::cin >> radius && radius > 0) && (std::cin >> corner && corner > -1 && corner < 361)) {
>>>>>>> Safonov
	std::cout << std::fixed << std::setprecision(2) << "Длина окружности - " << 2 * pi *radius << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Площадь круга - " << pi * radius * radius << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "Площадь кругового сектора - " << pi * radius * radius * corner / 360 << std::endl;
	} else {
<<<<<<< HEAD
	std::cout << "Ошибка радиус больше 0 и угол от 0 градусов и до 360 градусов" << std::endl;
=======
	std::cout << "Ошибка радиус больше 0 и угол от 0 градусов и до 360 градусов" << std::endl;
>>>>>>> Safonov
		}
}
