#include "trapezoid.h"
#include <iostream>
#include <iomanip>

void trapezoid() {
    double baseFirst, baseSecond, sideLeft, sideRight, heightValue;

    std::cout << "Введите параметры трапеции:" << std::endl;
    std::cout << "Основание a: ";
    std::cin >> baseFirst;
    std::cout << "Основание b: ";
    std::cin >> baseSecond;
    std::cout << "Боковая сторона c: ";
    std::cin >> sideLeft;
    std::cout << "Боковая сторона d: ";
    std::cin >> sideRight;
    std::cout << "Высота h: ";
    std::cin >> heightValue;

    // Проверка на отрицательные значения и ноль
    if (baseFirst <= 0 || baseSecond <= 0 || sideLeft <= 0 || sideRight <= 0 || heightValue <= 0) {
        std::cout << "Ошибка: все параметры должны быть положительными числами!" << std::endl;
        return;
    }

    // Если всё хорошо, вычисляем и выводим результат
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Периметр = " << baseFirst + baseSecond + sideLeft + sideRight << std::endl;
    std::cout << "Площадь = " << ((baseFirst + baseSecond) / 2.0) * heightValue << std::endl;
    std::cout << "Средняя линия = " << (baseFirst + baseSecond) / 2.0 << std::endl;
}
