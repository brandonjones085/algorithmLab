/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/22/2019
** Description:  This is the ant class for the langstons ant program
** Source: 
*******************************************************************************/





#include "binarySearch.hpp"
#include <iostream>


int binarySearch(int *array, int n, int value)
{
	int first, last, mid; 
	first = 0; 
	last = n - 1; 
	

	while (first <= last)
	{
		mid = (first + last) / 2; 

		if (value == array[mid])
		{
			return mid; 
		}
		else
		{
			if (value > array[mid])
			{
				first = mid + 1; 

			}
			else
			{
				last = mid - 1; 
			}
		}


	}

	
		return -1; 


}


