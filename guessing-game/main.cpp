#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, guess;

    // generate a random number between 1-100
    number = rand() % 100 + 1;


    std::cout << number; 


    // if number is to high or low show message and continue game. if correct stop the game.
    do
    {
        scanf("%i", guess);
        if (guess < number)
        {
            puts('Numbers to low');
        }
        else
        {
            puts('Numbers to high');
        }
        
    } while (number != guess);
    
    puts('You guessed it');

    return 0;
}
