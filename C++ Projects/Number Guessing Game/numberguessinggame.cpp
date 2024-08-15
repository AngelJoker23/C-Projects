#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1;
	int guess = 0;

	std::cout << "I have chosen a number between 1 and 100." << std::endl;
	std::cout << "Can you guess what it is?" << std::endl;

	while (guess != secretNumber)
	{
		std::cout << "Enter your guess: ";
		std::cin >> guess;

		if (guess > secretNumber)
		{
			std::cout << "Too high! Try again!" << std::endl;
		}
		else if (guess < secretNumber)
		{
			std::cout << "Too low! Try again!" << std::endl;
		}
		else
		{
			std::cout << "Congratulations! You guessed my number!" << std::endl;
		}
	}

	return 0;
}