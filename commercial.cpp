#include <iostream>
#include "operations.h"
using namespace std;

void operations::commercial()
{	
	int i, j, x, y;
	for(x = 0; x <= col; x++)//go through all cells within the number of columns in the array
	{
		for(y = 0; y <= row; y++)//go through all cells within the number of rows in the array
		{
			if(cell[x][y].type = C)//verify cell is of commercial type
			{
				if(cell[x][y].pop == 0)//verify cell poppulationis 0
				{
					for(y = 0; y <= row; y++)//check all cells for conditions
					{
						if(cell[x][y].[adj = 1, pow >= 1, worker >= 1, good >= 1] || cell[x][y].[pop >= 1, worker >=1, good >= 1])//conditions
						{	
							cell[x][y].pop++; //functionality
    			    	    cell[x][y].worker--;//subtracts a worker
    			    	    cell[x][y].good--;//sumbtracts a good
						}

					}
				}
			}
		}
	 	if(cell[x][y].pop = 1)//verify cell population is 1
		{
			if(cell[x][y].[adj = 1, pow >= 1, worker >= 1, good >= 1] || cell[x][y].[pop >= 1, worker >=1, good >= 1])conditions
			{	
				cell[x][y].pop++;//functionality adds 1 to population
   	    	    cell[x][y].worker--;//subtracts a worker
   	    	    cell[x][y].good--;//subtracts a good
			}
			
		}
	}
}
