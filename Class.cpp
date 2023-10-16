#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include "operations.h"
using namespace std;


void cell::readData(cell* &c)
{
  	Node *newcell = new cell; 
  	//ifstream fin("C:\\Users\\owner\\Documents\\cells.txt");
  	c = newcell;
  	while(!EOF)
	{
		newcell->type;
		newcell->pop;
		newcell->pow;
		newcell->worker;
		newcell->good;
		newcell->adj;
		newcell->road;
		newcell->poll;
     	newcell->next = new cell;
     	newcell = newcell->next;
  	}
}
void cell::printList(cell* x)
{
    while (x != NULL) 
	{
        cout << next->type->pop->pow->worker->good->road->poll << endl;
        x = x->next;
    }
}

void cell::func()
{
	int x, sizearr;
	for(x = 0; x < sizearr; x++)
	{
		cell cell(x);
	}
}
