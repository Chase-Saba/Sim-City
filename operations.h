#include <iostream>
using namespace std;


class operations{

public:
void commercial(); //located in commercial.cpp
void residential();
void industrial(); //located in industrial.cpp
//add adjacency list

void readMap();
void printLayoutMap();
void printUpdatedMap();
void AdjList(char arr[100][100], int rows, int cols, int x, int y, int** matrix);
void readConfig();
void Output(char arr[100][100], int rows, int cols, int** cellMatrix);


private:

char layoutMap[100][100];
char arrMap[100][100];
int row;
int col;
//add any variables that need to be accessed between the  residential,
//industrial, and commersial files



};


class cell
{
	public:
	void readData(cell* &c);
	void printList(cell* x);
	void func();



	char type;
  	int pop;
  	int pow;
  	int worker;
  	int good;
	int adj;
	int road;
	int poll;
	//int x, y;
	cell *next;
};
