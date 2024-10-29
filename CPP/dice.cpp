// dice.cpp
// Edem Abdullaiev
// This program simulates the random roll of two dice
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	// Constants and variables declaration
	const int MIN = 1;
	const int MAX = 6;
	unsigned seed;
	int rdie, bdie, result;
	
	// Seed the random number generator
	seed = time(0);
	srand(seed);
	
	// Calculations (Roll the dice)
	rdie = (rand() % (MAX - MIN + 1)) + MIN;
	bdie = (rand() % (MAX - MIN + 1)) + MIN;
	result = rdie + bdie;
	
	// Check if dice are equal or not and print the result
	if (rdie == bdie)
		cout << "The red die is " << rdie << " and the blue die is " << bdie <<", producing a sum of hard " << result << endl;
	else
	{
		cout << "The red die is " << rdie << " and the blue die is " << bdie <<", producing a sum of " << result << endl;
	}
	
   return 0;
}
