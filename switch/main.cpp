#include <iostream>

int main(int argc, char const *argv[])
{
    int number = 1;
    int counter = 0;
    while (number != counter) {
        std::cout << "Enter any number other than " << counter << '\n';
        std::cin >> number;
        counter++;

        if (counter == 10)
        {
            std::cout << "Wow, you're more patient then I am, you win." << '\n';
            return 0;
        }

        if (number == counter)
        {
            std::cout << "Hey! you weren't supposed to enter " << number << "!";
            return 0;
        }
        
    }
}

