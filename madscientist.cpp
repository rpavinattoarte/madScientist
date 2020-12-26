#include <iostream>

int main()
{
    std::cout << "\nYou are a scientist working on a secret project call 'tripleX'.\n";
    std::cout << "\nPlease, enter the password to access the laboratory: ";
    //std::cout << "GAME OVER!";

    
    const int a = 4, b = 3, c = 2;
    const int sum = a + b + c;
    const int product = a * b * c;
    std::cout << "Sum " << sum << " Product " << product;

    return 0;
}