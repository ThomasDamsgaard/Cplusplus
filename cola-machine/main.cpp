#include <iostream>

int main(int argc, char const *argv[])
{
    int input = 0;
    // Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
    std::cout << "Choose beverage: 1 - Coke, 2 - Sprite, 3 - Water, 4 - Fanta, 5 - Faxe" << '\n';

    // Then allow the user to choose a beverage by entering a number 1-5.
    std::cin >> input;

    // Output which beverage they chose.
    switch (input)
    {
    case 1:
        std::cout << "You chose 1 - Coke";
        break;
    case 2:
        std::cout << "You chose 2 - Sprite";
        break;
    case 3:
        std::cout << "You chose 3 - Water";
        break;
    case 4:
        std::cout << "You chose 4 - Fanta";
        break;
    case 5:
        std::cout << "You chose 5 - Faxe";
        break;

    default:
        std::cout << "Error. Choice was not valid, here is your money back";
        break;
    }

    return 0;
}

