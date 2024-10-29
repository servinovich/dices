# Project Title
Dices

## Description

Simple programm that simulates the trow of two dices in C++

## Getting Started

### Dependencies

* C++

### Installing

* No need

### Executing program

* Just run it in any C++ compilor

```
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


```

## Help

Any advise for common problems or issues.
```
command to run if program contains helper info
```

## Authors

Edem Abdullaiev
[Servinovich](https://www.instagram.com/servinovich/)

## Version History

* 0.1
    * Initial Release

## License

This project is licensed under the [EDEM ABDULLAIEV] License - see the LICENSE.md file for details

## Acknowledgments

Inspiration, code snippets, etc.
* [servinovich](https://github.com/servinovich/dices)
