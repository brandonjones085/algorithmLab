/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/22/2019
** Description:  Header file for the linearSearch function
//SOURCE: http://www.cplusplus.com/forum/beginner/215246/
*******************************************************************************/


#include "sortArray.hpp"
#include <iostream>
#include <string>
#include <fstream>


void sortArray(int *array, int n)
{
	std::ofstream outputFile; 

	std::string file = " "; 


	int temp; 


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j]; 
				array[j] = temp; 
			}

		}
	}


	std::cout << "\nWhat would you like to name the file? "; 
	std::cin >> file; 

	outputFile.open(file); 
	if (!outputFile)
	{
		std::cout << "\nFile could not open!\n\n"; 
	}

	for (int i = 0; i < n; i++)
	{
		outputFile << array[i] << ", "; 
	}

	outputFile.close(); 


}
