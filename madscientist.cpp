#include <iostream>

int main()
{
    //Welcome message
    std::cout << "\nYou are a scientist working on a secret project call 'tripleX'.\n";
    std::cout << "\nPlease, enter the password to access the laboratory: ";
    //std::cout << "GAME OVER!";

    //Variables
    const int a = 4, b = 3, c = 2;
    const int sum = a + b + c;
    const int product = a * b * c;

    //Return message from prompt command
    std::cout << "Sum " << sum << " Product " << product;

    return 0;
}