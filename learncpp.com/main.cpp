// Preprocessor directives (often just called directives) are instructions that
// start with a # symbol and end with a newline (NOT a semicolon)
// When you #include a file, the preprocessor replaces the #include directive with 
// the contents of the included file. The included contents are then preprocessed 
// (along with the rest of the file), and then compiled.
#include <iostream>

// Insert contents of multiplyNumbers.h at this point.  Note use of double quotes here.
// Acts as forward decleration so no reason to do it later.
#include "multiplyNumbers.h"

// The identifier is traditionally typed in all capital letters, using underscores to represent spaces.
#define PI 3.14
#define AREA_CIRCLE(radius) (PI * (pow(radius, 2)))

// void means the function does not return a value to the caller
void returnNothing()
{
    std::cout << "Returns nothing" << '\n';
    // This function does not return a value so no return statement is needed
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input = 0;
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}


// To write a forward declaration for a function, we use a declaration statement called a function prototype. 
// The function prototype consists of the function’s return type, name, parameters, but no function body 
// terminated with a semicolon.
int subtractNumbers(int x, int y); // forward declaration of subtractNumbers() (using a function prototype)

// Forward decleration for the addNumbers() in addNumbers.cpp file. When not included and in same folder
// as the file containing the main function you should compile likes this: g++ main.cpp addNumbers.cpp -o program
int addNumbers(int x, int y);

int main()
{
    /*
    The :: symbol is an operator called the scope resolution operator. 
    The identifier to the left of the :: symbol identifies the namespace that 
    the name to the right of the :: symbol is contained within. 
    If no identifier to the left of the :: symbol is provided, the global namespace is assumed.
    So when we say std::cout, we’re saying “the cout that lives in namespace std“.
    */
    std::cout << "Hello world!" << '\n'; // when we say cout, we mean the cout defined in the std namespace

    std::cout << "PI value: "
              << PI
              << '\n';

    returnNothing();

    std::cout << addNumbers(4,5) << '\n';
    std::cout << subtractNumbers(4,5) << '\n';

    printDouble(getValueFromUser());

    return 0;
}

int subtractNumbers(int x, int y) // even though the body of subtractNumbers() isn't defined until here
{
    return x - y;
}