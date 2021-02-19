#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, guess;

    // generate a random number between 1-100
    number = rand() % 100 + 1;

    // if number is to high or low show message and continue game. if correct stop the game.
    do
    {
        scanf("%i", &guess);
        if (guess < number)
        {
            std::cout << "Numbers to lo" << '\n';
        }
        else if (guess > number)
        {
            std::cout << "Numbers to hi" << '\n';
        }
        
    } while (number != guess);

    std::cout << "You guessed it";

    return 0;
}
