#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>

 int _tmain(int argc, _TCHAR* argv[])
{
	const int iNumNumbers = 100000;
	const int iNumMathOps = 500;
	const int iNumSorts = 200;

	std::vector<double> vInput;
	for (int i = 0; i < iNumNumbers; i++) {
		vInput.push_back(std::rand());
	}
	std::vector<double> vOutput(iNumNumbers);

	const clock_t timeStart = std::clock();

	for (int j = 0; j < iNumMathOps; j++) {
		for (int i = 0; i < iNumNumbers; i++) {
			vOutput[i] = std::sqrt(vInput[i]); // sin, sqrt
		}
	}

	const clock_t timeMathComplete = std::clock();

	for (int i = 0; i < iNumSorts; i++) {
		std::sort(vOutput.begin(), vOutput.end());
        std::random_shuffle(vOutput.begin(), vOutput.end());
	}

	const clock_t timeEnd = std::clock();
	const clock_t timeDiffMath = timeMathComplete - timeStart;
	const clock_t timeSorts = timeEnd - timeMathComplete;
	const clock_t timeTotal = timeEnd - timeStart;


	#ifdef __clang__
		std::cout << "Clang-enhanced compiler" << std::endl;
	#else
		std::cout << "Classic compiler" << std::endl;
	#endif

	std::cout << "Math:           " << timeDiffMath << "ms" << std::endl;
	std::cout << "Sort / shuffle: " << timeSorts << "ms" << std::endl;
	std::cout << "Total:          " << timeTotal << "ms" << std::endl;

	return 0;
}
