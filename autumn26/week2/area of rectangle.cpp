#include <iostream>

int main(){
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangel: " << perimeter << std::endl;
}