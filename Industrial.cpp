#include <iostream>
#include "operations.h"
using namespace std;

void operations::industrial()
{	
	int i, x, y, sizearr;
	
	//WIP population, goods, pollution, and worker fxns
	for(x = 0; x <= sizearr; x++)
	{
		if(cell(x).type = I)
		{
			if(cell(x).pop == 0)
			{
		      if( cell(x).pow>=1 && avWork>=2)
		      {
			    cell(x).pop++;
				cell(x).good++;
				cell(x).poll++
				avWork-2;
			  }
			    for(i = 0; i <= sizearr; i++)
					{
						if(cell(i).adj >= 1 && cell(i).pop >= 1 && avWork=2)
						{
							cell(x).pop++;
				            cell(x).good++;
							cell(x).poll++
				            avWork-2;
						}
					}
			}

              if( cell(x).pop == 1)
			  {
				  for(i = 0; i <= sizearr; i++)
					{
						if(cell(i).adj >= 2 && cell(i).pop >= 1 && avWork=2)
						{
							cell(x).pop++;
				            cell(x).good++;
							cell(x).poll++
				            avWork-2;
						}
					}
			}
			
			if( cell(x).pop == 2)
			  {
				  for(i = 0; i <= sizearr; i++)
					{
						if(cell(i).adj >= 4 && cell(i).pop >= 2 && avWork=2)
						{
							cell(x).pop++;
				            cell(x).good++;
							cell(x).poll++
				            avWork-2;
						}
					}
			}
		}
	}
	
	//WIP Pollution Fxn
	
	for(x = 0; x <= sizearr; x++)
	{
		if(cell(x).type = I){
			
		 if(cell(x).poll > 0){
			  
			  for(i = 0; i <= sizearr; i++){
				  
				  if(cell(i).adj==1 && cell(x).poll > cell(i).poll){
					  //not sure about how adjacency on this if statement would work
					  cell(i).poll=cell(x).poll-1;}
			  }
		 }
		}
	}
		 
		
}
