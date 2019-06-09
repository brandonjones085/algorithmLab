/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/22/2019
** Description:  This is the ant class for the langstons ant program
*******************************************************************************/

#include "linearSearch.hpp"
#include <iostream>

int linearSearch(int *array, int end, int x)
{

	for (int i = 0; i < end; i++)
	{
		if (array[i] == x)
		{
			return i; 
		}

		
	}
	return -1;

}
