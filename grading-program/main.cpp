#include <iostream>

int main(int argc, char const *argv[])
{
    int number = 0;

    std::cout << "Enter the grade scored in the class (0-100)" << '\n';

    std::cin >> number;

    if (number > 89)
    {
        std::cout << "You got an A" << '\n';
    }
    else if (number > 79 && number < 90)
    {
        std::cout << "You got a B" << '\n';
    }
    else if (number > 69 && number < 80)
    {
        std::cout << "You got a B" << '\n';
    }
    else if (number > 59 && number < 70)
    {
        std::cout << "You got a B" << '\n';
    }
    else
    {
        std::cout << "You got a F" << '\n';
    }
    
    return 0;
}
