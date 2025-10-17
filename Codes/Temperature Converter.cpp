#include <iostream>
#include <iomanip>


void fahr_to_celsius(double fahrenheit, double &celsius)
{
    celsius = (5.0/9.0)*(fahrenheit - 32);
}
void fahr_to_kelvin(double fahrenheit, double &kelvin)
{
    kelvin = (5.0/9.0)*(fahrenheit - 32) + 273.15;
}
void cels_to_fahrenheit(double celsius, double &fahrenheit)
{
    fahrenheit = (9.0/5.0)*celsius + 32;
}
void cels_to_kelvin(double celsius, double &kelvin)
{
    kelvin = celsius + 273.15;
}
void kelv_to_fahrenheit(double kelvin, double &fahrenheit)
{
    fahrenheit = (9.0/5.0)*(kelvin - 273.15) + 32;
}
void kelv_to_celsius(double kelvin, double &celsius)
{
    celsius = kelvin - 273.15;
}

int main()
{
    int choice;
    double temperature, result;
    char ifRepeat;

    do
    {
         std::cout << "\n===MENU================\n";
    std::cout << "Choose Task To do\n";
    std::cout << "1. Fahrenheit to Celsius\n";
    std::cout << "2. Fahrenheit to Kelvin\n";
    std::cout << "3. Celsius to Fahrenheit\n";
    std::cout << "4. Celsius to Kelvin\n";
    std::cout << "5. Kelvin to Fahrenheit\n";
    std::cout << "6. Kelvin to Celsius\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter Choice (1-7): ";
    std::cin >> choice;

    if (choice == 7){
        std::cout << "Exiting Program...\n";
        break;
    }

    std::cout << "Enter Temperature to be Converted: ";
    std::cin >> temperature;

    std::cout << std::fixed << std::setprecision(3);

    switch (choice)
    {
    case 1:
        fahr_to_celsius(temperature, result);
            std::cout << "Celsius: " << result << std::endl;
        break;

    case 2:
        fahr_to_kelvin(temperature, result);
            std::cout << "Kelvin: " << result << std::endl;
        break;
    
    case 3:
        cels_to_fahrenheit(temperature,result);
            std::cout << "Fahrenheit: " << result << std::endl;
        break;

    case 4:
        cels_to_kelvin(temperature, result);
            std::cout << "Kelvin: " << result << std::endl;
        break;

    case 5:
        kelv_to_fahrenheit(temperature, result);
            std::cout << "Fahrenheit: " << result << std::endl;
        break;

    case 6:
        kelv_to_celsius(temperature, result);
            std::cout << "Celsius: " << result << std::endl;
        break;
    
    default:
        std::cout << "Invalid Choice!" << std::endl;
        break;
    }

    std::cout << "Want to convert another Temperature? ";
    std::cin >> ifRepeat;

    if (ifRepeat == 'n' || ifRepeat == 'N')
    {
        break;
    }

    } while (ifRepeat == 'y' || ifRepeat == 'Y');

    std::cout << "Thank you for using the program" << std::endl;
        
    return 0;

}

