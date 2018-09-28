// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "targetver.h"
#include <iostream>
#include "StringChecks.h"
#include "MarsLander_2.h"
#include "Race.h"

void fizzBuzz() 
{
	for (unsigned int i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0) std::cout << "Fizz";
		if (i % 5 == 0) std::cout << "Buzz";
		if (i % 3 != 0 and i % 5 != 0) std::cout << i;
		std::cout << std::endl;
	}
}

int main()
{
	//stringchecks::StringChecks::Play();
	//MarsLanding::MarsLander_2::Play();
	racing::Play();
    return 0;
}

