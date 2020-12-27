#include <iostream>

int main()
{
    //Welcome message
    std::cout << "\nYou are a scientist working on a secret project call 'tripleX'.\n";
    std::cout << "\nPlease, enter the credentials to access the laboratory. \n";
    std::cout << "RESTRICT AREA! Insert the password 'Three numbers' to get access: " << std::endl;

    //Variables
    const int codeA = 4, codeB = 3, codeC = 2;
    const int codeSum = codeA + codeB + codeC;
    const int codeProduct = codeA * codeB * codeC;
    int playerGuess;
    int guessSum;
    int guessProduct;
    int guessA, guessB, guessC;

    //Inputs from prompt command
    std::cin >> guessA;
    std::cin >> guessB;
    std::cin >> guessC;

    guessSum = guessA + guessB + guessC;
    guessProduct = guessA * guessB * guessC;

    //Return message from prompt command
    std::cout << "Print the Sum " << codeSum << std::endl;
    std::cout << "Print the Product " << codeProduct << std::endl;

    if (guessSum == codeSum)
    {
        std::cout << "\nWelcome! Access Allowed." << std::endl;
    }
    else
    {
        std::cout << "Sorry, Access denied! Try again..." << std::endl;
    }

    return 0;
}