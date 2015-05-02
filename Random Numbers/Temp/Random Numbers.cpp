// Random Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RandomGenerator.h"
#include <thread>
#include <chrono>

int _tmain(int argc, _TCHAR* argv[])
{
	RandomGen Generator;
	
	for (int i = 0; i < 15; i++)
	{
		printf("Int:%d \n", Generator.GetRandom<int>(0, 5, false));
		printf("Bool:%d \n", Generator.GetRandom(false));
		printf("float:%f \n", Generator.GetRandom<float>(0.0f, 5.0f, false));
		printf("\n");
	}
	
	std::this_thread::sleep_for(std::chrono::seconds(25));
	return 0;
}


