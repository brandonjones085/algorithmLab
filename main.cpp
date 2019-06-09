
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/22/2019
** Description:  The main file for the program to run. 
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>



#include "linearSearch.hpp"
#include "sortArray.hpp"
#include "binarySearch.hpp"


int main()
{
	int value = 0; 
	int num = 9; //number of ints
	int *array1 = new int[num]; //first list
	int *array2 = new int[num]; //second list
	int *array3 = new int[num]; //third list
	int *array4 = new int[num]; //fourth list
	
	//User input
	std::cout << "\nWhat is the target value: "; 
	std::cin >> value; 

	std::ifstream infile; //stream 


	//first file
	infile.open("first.txt");

	//validation
	if (!infile)
	{
		std::cout << "\nInput file did not open " << std::endl << std::endl; 
	}


	//reads in values
	for (int i = 0; i < num; i++)
	{
		infile >> array1[i]; 

	}

	std::cout << "File One Read..." << std::endl; 

	//runs the linearSearch for first list
	int search = linearSearch(array1, num, value); 
	if (search == -1)
	{
		std::cout << "\nTarget value not found\n\n"; 
	}
	else
	{
		std::cout << "\nTarget value " << value << " found at the " << search << " space\n\n";
	}


	infile.close(); 

	
	//Second file
	infile.open("early.txt"); 

	//validation
	if (!infile)
	{
		std::cout << "\nInput file did not open " << std::endl << std::endl;
	}

	//reads in values
	for(int i = 0; i < num; i++)
	{
		infile >> array2[i]; 

	}
	std::cout << "File Two Read..." << std::endl;

	//runs the linearSearch for two list
	int search1 = linearSearch(array2, num, value);
	if (search1 == -1)
	{
		std::cout << "Target value not found\n\n";
	}
	else
	{
		std::cout << "Target value " << value << " found at the " << search << " space\n\n";
	}



	infile.close(); 


	//Third file
	infile.open("middle.txt"); 


	//reads in values
	for (int i = 0; i < num; i++)
	{
		infile >> array3[i]; 

	}

	std::cout << "File Three Read..." << std::endl;

	//runs the linearSearch for third list
	int search2 = linearSearch(array3, num, value);
	if (search2 == -1)
	{
		std::cout << "\nTarget value not found\n\n";
	}
	else
	{
		std::cout << "\nTarget value " << value << " found at the " << search << " space\n\n";
	}

	infile.close(); 



	//Fourth file
	infile.open("end.txt");


	//reads in values
	for (int i = 0; i < num; i++)
	{
		infile >> array4[i];

	}

	std::cout << "File Four Read..." << std::endl;

	//runs the linearSearch for first list
	int search3 = linearSearch(array4, num, value);

	if (search3 == -1)
	{
		std::cout << "\nTarget value not found\n\n";
	}
	else
	{
		std::cout << "\nTarget value " << value << " found at the " << search << " space\n\n";
	}

	infile.close();


	sortArray(array1, num); 
	sortArray(array2, num);
	sortArray(array3, num);
	sortArray(array4, num);


	std::cout << "\nThe binary search\n"; 
	int first = binarySearch(array1, num, value);
	int second = binarySearch(array2, num, value);
	int three =  binarySearch(array3, num, value);
	int four = binarySearch(array4, num, value);

	if (first == -1)
	{
		std::cout << "\nValue not found\n";
		
	}
	else
	{
		std::cout << "\nValue found at the " << first << " position \n";
	}

	if (second == -1)
	{
		std::cout << "\nValue not found\n";
		
	}
	else
	{
		std::cout << "\nValue found at the " << second << " position \n";
	}


	if (three== -1)
	{
		std::cout << "\nValue not found\n";

	}
	else
	{
		std::cout << "\nValue found at the " << three << " position \n";
	}

	if (four == -1)
	{
		std::cout << "\nValue not found\n";

	}
	else
	{
		std::cout << "\nValue found at the " << four << " position \n";
	}


	delete array1; 
	delete array2; 
	delete array3; 
	delete array4; 



}

