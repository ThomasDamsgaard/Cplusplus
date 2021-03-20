// Write the following program : The user is asked to enter 2 floating point numbers(use doubles).
// The user is then asked to enter one of the following mathematical symbols : +, -, *, or /.
// The program computes the answer on the two numbers the user entered and prints the results.
// If the user enters an invalid symbol, the program should print nothing.

#include <iostream>

double getDoubleValue()
{
    std::cout << "Enter a double value : ";
    double number;
    std::cin >> number;
    return number;
}

char getSymbol()
{
    std::cout << "Enter one of the following : +, -, *, or / : ";
    char symbol;
    std::cin >> symbol;
    return symbol;
}

void result(double numOne, double numTwo, char sym)
{
    if (sym == '+')
    {
        std::cout << numOne << " " << sym << " " << numTwo << " is " << numOne + numTwo;
    }
    else if (sym == '-')
    {
        std::cout << numOne << " " << sym << " " << numTwo << " is " << numOne - numTwo;
    }
    else if (sym == '*')
    {
        std::cout << numOne << " " << sym << " " << numTwo << " is " << numOne * numTwo;
    }
    else
    {
        std::cout << numOne << " " << sym << " " << numTwo << " is " << numOne / numTwo;
    }
}

int main(int argc, char const *argv[])
{
    double x = getDoubleValue();
    double y = getDoubleValue();
    char sym = getSymbol();
    result(x, y, sym);
    return 0;
}


// Example of program :
// Enter a double value : 6.2 
// Enter a double value : 5 
// Enter one of the following : +, -, *, or / : *
// 6.2 * 5 is 31