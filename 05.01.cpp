#include <iostream>
#include <string>
#include <Windows.h>

class Figure {
protected:
    int sides_count;
    std::string name;

    Figure(int sides_count, const std::string& name) : sides_count(sides_count), name(name) {}

public:
    Figure() : Figure(0, "Фигура") {}

    int get_sides_count() const {
        return sides_count;
    }

    std::string get_name() const {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3, "Треугольник") {}
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4, "Четырёхугольник") {}
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}
