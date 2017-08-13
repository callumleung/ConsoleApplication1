// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "Header.h"
#include <iostream>
#include <string>

//function prototypes
int GetInitialValue();
int GameIteration(int);


int main()
{
	//Simple game taking in a large random number
	//at end of iteration print current number and operation used 
	//repreat until 1 is reached


	int Value = GetInitialValue();

	while (Value > 1)
	{
		GameIteration(Value);
		Value /= 3;

	}

	std::cout << "1 \n";

	//may want to print final number of steps use

	//asdasd
    return 0;
}

//method to read in and return the value of the starting number
int GetInitialValue()
{
	std::cout << "Enter initial value: \n";

	int initial;
	std::cin >> initial;
	std::cout << std::endl;


	return initial;
}



int GameIteration(int Value)
{
	int Remainder = Value % 3;

	switch (Remainder) {

		//if the number is divisible by three do so
	case 0: 
		std::cout << Value << "\t" << "0 \n";
		return Value;

		//if number mod 3 is 1 subtract 1
	case 1: 
		std::cout << Value << "\t" << "-1\n";
		
		return Value - 1;
		
	case 2:
		std::cout << Value << "\t" << "+1\n";

		return Value + 1;
		//else number is 2 mod 3 hence add one

	default:
		std::cout << "Error has occured\n";
		break;


	}





	return 0;
}

