#include <iostream>
#include <cmath>
using namespace std;

double rectangleArea(double width, double height) {
    return width * height;
}

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

double circleArea(double radius) {
    return M_PI * radius * radius;  
}

int main() {
    int choice;
    
    cout << "Выберите фигуру для расчета площади:" << endl;
    cout << "1. Прямоугольник" << endl;
    cout << "2. Треугольник" << endl;
    cout << "3. Круг" << endl;
    cout << "Введите номер выбора: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double width, height;
            cout << "Введите ширину и высоту прямоугольника: ";
            cin >> width >> height;
            cout << "Площадь прямоугольника: " << rectangleArea(width, height) << endl;
            break;
        }
        case 2: {
            double base, height;
            cout << "Введите основание и высоту треугольника: ";
            cin >> base >> height;
            cout << "Площадь треугольника: " << triangleArea(base, height) << endl;
            break;
        }
        case 3: {
            double radius;
            cout << "Введите радиус круга: ";
            cin >> radius;
            cout << "Площадь круга: " << circleArea(radius) << endl;
            break;
        }
        default:
            cout << "Некорректный выбор!" << endl;
            break;
    }

    return 0;
}