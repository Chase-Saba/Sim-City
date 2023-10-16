#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "operations.h"

using namespace std;




void operations::readMap()
{

  string line;
string fileName;
cout<<"Enter the name of the region map file: ";
getline(cin, fileName);
  //char layoutMap[100][100]; //operations array
  this->row = 0;
  this->col = 0;

  ifstream mapFile(fileName); //checks if operations file exists

  if (mapFile.fail()) {
    cout << "Could not open file or file does not exist" << endl << "Terminating..." << endl;;
    exit(EXIT_FAILURE);
  }

  int n = 0;
  int rowLoop = 0;
  while (!mapFile.eof()) {
    getline(mapFile, line);
    for (int j = 0; j < line.size(); j++) { //for loop removes the commas and puts elements into array
      if (line[j] != ',') {
        this->layoutMap[col][n] = line[j]; //n is so that there is no null spot where the commas were
        this->arrMap[col][n] = line[j];
	n++;
      } else {
        if (rowLoop == 0) {//stops counting after the first row-run, since it is a rectangle/square
          row++;
        }
      }
    }

    rowLoop = 1;
    n = 0;
    col++;
  }
  mapFile.close();
  

cell cell[col][row];
for(int x = 0; x <= col; x++)
    {
           for (int y = 0; y <= row; y++)
         {
                    if(arrMap[x][y] == 'R')
                       {
                               cell[x][y].type = 'R';
                       }
                       if(arrMap[x][y] == 'C')
                       {
                               cell[x][y].type = 'C';
                       }
                       if(arrMap[x][y] == 'I')
                       {
                             cell[x][y].type = 'I';
                        }
                      if(arrMap[x][y] == 'T')
                    {
                                cell[x][y].type = 'T';
                    }
                     if(arrMap[x][y] == '#')
                    {
                            cell[x][y].type = '#';
                   }
                   if(arrMap[x][y] == 'P')
                    {
                      cell[x][y].type = 'P';
                    }
            }
    }

}



void operations::printLayoutMap()
{
  for (int i = 0; i < col; i++) { //making sure everything was put into the array correctly
    for (int j = 0; j < row; j++) {
      cout << this->layoutMap[i][j]<<"\t";
    }
    cout << endl;
  }

}

void operations::printUpdatedMap()
{

for (int i = 0; i < col; i++) { //making sure everything was put into the array correctly
    for (int j = 0; j < row; j++) {
      cout << this->arrMap[i][j]<<"\t";
    }
    cout << endl;
  }

}
