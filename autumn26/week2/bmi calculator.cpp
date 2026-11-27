#include <iostream>

int main(){
    double weight, height, bmi;

    std::cout << "What is you height in metres? ";
    std::cin >> height;

    std::cout << "What is your weight in kilograms? ";
    std::cin >> weight;

    bmi = weight / (height * height);
    std::cout << "Your BMI is: " << bmi << std::endl;
}