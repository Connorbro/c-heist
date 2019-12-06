#include <iostream>

void PlayGame()
{
    std::cout << "You are robbing a bank... \n";
    std::cout << "The locks to break in and secure your money require various maths puzzles... \n";
    std::cout << "If you get one wrong the alarms ring and you get caught!\n\n";

    const int KeyA = 4;
    const int KeyB = 3;
    const int KeyC= 2;


    const int CodeSum = KeyA + KeyB + KeyC;
    const int CodeProduct = KeyA * KeyB * KeyC;
    std:: cout << std::endl;
    std:: cout << "+ There are three numbers in the code \n";
    std:: cout << "+ The codes add-up to: " << CodeSum << std:: endl;
    std:: cout << "+ The codes multiply to give: " << CodeProduct << std:: endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std:: cout << "you win \n";
    }
    else 
    {
        std:: cout << "You lose \n";
    }

}

int main()
{
    
    
    return 0; 
}