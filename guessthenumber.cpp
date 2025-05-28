#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" <<std:: endl;
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." <<std:: endl;
        }
    } while (guess != secretNumber);

    return 0;
}
