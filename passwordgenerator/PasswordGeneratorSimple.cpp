#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;


class PasswordGenerator {

public:
    void generatePassword() {
        // Length of the password
        unsigned short int length = 8;

        // Seednumber for rand()
        srand((unsigned int)time(0));

        // ASCII characters 33 to 126

        while (length--)
        {
            putchar(rand() % 94 + 33);
        }

        printf("/n");
    }
};


int main() {
    PasswordGenerator PasswordGenerator;

    PasswordGenerator.generatePassword();

    return EXIT_SUCCESS;
}
