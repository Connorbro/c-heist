#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\nYou are robbing a bank... \n";
    std::cout << "The locks to break in and secure your money require various maths puzzles... \n";
    std::cout << "Level " << Difficulty << std:: endl;

}
bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int KeyA = rand() % Difficulty + Difficulty;
    const int KeyB = rand() % Difficulty + Difficulty;
    const int KeyC= rand() % Difficulty + Difficulty;


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
        std:: cout << "Well done! keep it up \n";
        return true;
    }
    else 
    {
        std:: cout << "You entered a wrong code, the alarm rings and you go to jail! \n";
        return false;
    }

}
int main()
{
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        if(bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n Great work!! You escape with the money!!";
    return 0; 
}