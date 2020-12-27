#include <iostream>

void PrintIntroduction(int difficulty)
{
    //Welcome message
    std::cout << "\nYou are a scientist working on a secret project call 'tripleX'." << std::endl;
    std::cout << "Laboratory nivel - " << difficulty << std::endl;
    std::cout << "RESTRICT AREA! Insert the password 'Three numbers' to get access: " << std::endl;
}

bool PlayGame(int difficulty)
{
    PrintIntroduction(difficulty);

    //Variables
    const int codeA = rand(), codeB = rand(), codeC = rand();
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

    //Check the password is correct
    if (guessSum == codeSum)
    {
        std::cout << "\nWelcome! Access Allowed." << std::endl;
        return true;
    }
    else
    {
        std::cout << "Sorry, Access denied! Try again..." << std::endl;
        return false;
    }
}

int main()
{
    int levelDifficulty = 1;
    const int maxDificulty = 5;

    while (levelDifficulty <= maxDificulty)
    {
        bool bLevelComplete = PlayGame(levelDifficulty);
        //Clears the errors
        std::cin.clear();
        //Discards the buffer
        std::cin.ignore();

        if (bLevelComplete)
        {
            /* Increase the level dificulty*/
            ++levelDifficulty;
        }
    }

    return 0;
}