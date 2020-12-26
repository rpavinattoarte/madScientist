#include <iostream>

int main()
{
    //Welcome message
    std::cout << "\nYou are a scientist working on a secret project call 'tripleX'.\n";
    std::cout << "\nPlease, enter the credentials to access the laboratory. \n";

    //Variables
    const int codeA = 4, codeB = 3, codeC = 2;
    const int codeSum = codeA + codeB + codeC;
    const int codeProduct = codeA * codeB * codeC;

    //Return message from prompt command
    std::cout << "Print the Sum " << codeSum << std::endl;
    std::cout << "Print the Product " << codeProduct << std::endl;
    std::cout << "RESTRICT AREA! Insert the password 'Three numbers' to get access: ";
    

    return 0;
}