#include <iostream>
#include "operations.h"
using namespace std;
void operations::residential()
{
	int i, j, x, y;
	for(x = 0; x <= row; x++)//go through every cell within the number of rows
	{
		for(y = 0; y <= row; y++)//go through every cell within the number of columns
		{
			if(cell[x][y].type = 'R')//verify cell is residential type
			{
				if(cell[x][y].pop == 0)//verify population is 0
				{
					if(cell[x][y].pow >= 1])//condition verifies there is a powerline
					{	
						cell[x][y].pop++;//population increases by 1
						cout << "Population in cell " << x << "is now: " << cell(x).pop;//outputs the population and cell number
					}
				}
				for(i = 0; i <= 4; i++)//condition that verifies population is 0-4
				{
					if(cell[x][y].pop == i)//check the cell if the population is 0-4
					{
						for(j = 0; j <= sizearr; j++)//check all cells for adjacency
						{
							if(cell[x][y].adj == 1 && cell[x][y].pop >= i+1])//condition for adjacency
							{
									cell[x][y].pop++;//increases population by 1
								cout << "Time: " << x << endl;//outputs the time
								cout << "Cell: " << x << endl;//outputs the cell number
								cout << "Population: " << cell[x][y].pop << endl;//outputs the population of the cell
							}
						}
					}
				}
			}
		}
	}
}
