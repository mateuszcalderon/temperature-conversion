// LAST UPDATE: 04/27/2024.
// Including <cctype> we're able to work with the toupper function.
#include <cctype>
#include <iostream>

int main() {
    char conversion;
    float celsius, fahrenheit, kelvin, newton;
    /* To underline text, use this command: \033[4m \033[
       The text between \033[4m \033[ will be underlined. */
    std::cout << "\033[4mF\033[0mahrenheit" << "\n";
    std::cout << "\033[4mK\033[0melvin" << "\n";
    std::cout << "\033[4mN\033[0mewton" << "\n";
    std::cout << "Convert Celsius to (F, K or N): ";
    std::cin >> conversion;
    // The toupper function converts lowercase letter to uppercase.
    if(toupper(conversion) == 'F') {
        std::cout << "Celsius: ";
        std::cin >> celsius;
        fahrenheit = 1.8 * celsius + 32;
        std::cout << "Fahrenheit: " << fahrenheit;
    }
    else if(toupper(conversion) == 'K') {
        std::cout << "Celsius: ";
        std::cin >> celsius;
        kelvin = celsius + 273.15;
        std::cout << "Kelvin: " << kelvin;
    }
    else if(toupper(conversion) == 'N') {
        std::cout << "Celsius: ";
        std::cin >> celsius;
        newton = celsius / 3.03030303;
        std::cout << "Newton: " << newton;
    }
    else {
        std::cout << "Not a valid option, please try again.";
    }
    return 0;
}