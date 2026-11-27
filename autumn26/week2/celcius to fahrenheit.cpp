#include <iostream>

int main(){
    double celcius, fahrenheit;

    std::cout << "Enter the temperature in celcius: ";
    std::cin >> celcius;
    fahrenheit = (celcius * 9/5) + 32;

    std::cout << celcius << " degrees celcius is equal to " << fahrenheit << " degrees fahrenheit." << std::endl;
}