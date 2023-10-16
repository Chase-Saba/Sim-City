#include "operations.h"

/*
This function requires to be passed the char array, the array's column and row size, and as 
well as a x and y coordinate for the node you want to check adjacency for. Along with an matrix with correct size to be passed by reference
It will return an array matrix of 0's and 1's. A 1 indicates adjacency for that node.
*/
// the code you need to implement before passing this array is as follows
//int** adj = {0};
 // adj = new int *[col];
//for(int i = 0; i <col; i++){
  //  adj[i] = new int[row];
//}
// AdjList(arrMap,row,col, xCoordinate,yCoordinate, adjMatrix);


  

void operations::AdjList(char arr[100][100], int rows, int cols, int x, int y, int** matrix) {

    //matrix[rows][cols]; //declare adjacency matrix
    rows+=4;
    for(int i =0; i < rows; i++) { //intialize matrix with zeros
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }
    // a zero means no adjacency a 1 means adjacency
            if(x == 0 && y == 0) { //top left corner
                 matrix[0][1] = 1;
                 matrix[1][1] = 1;
                 matrix[1][0] = 1;
            }
            else if(x == 0 && y == cols) { //top right corner
                 matrix[0][cols-1] = 1;
                 matrix[1][cols-1] = 1;
                 matrix[1][cols] = 1;
            }
            else if(x == rows && y == 0) { //bottom left corner
                 matrix[rows][1] = 1;
                 matrix[rows-1][1] = 1;
                 matrix[rows-1][0] = 1;
            }
            else if(x == rows && y == cols) { //bottom right corner
                 matrix[rows][cols-1] = 1;
                 matrix[rows-1][cols-1] = 1;
                 matrix[rows-1][cols] = 1;
            }
            else if(x==0 && y != 0 && y!= cols) //top row not corners
            {
                matrix[0][y+1] = 1;
                matrix[0][y-1] = 1;
                matrix[1][y] = 1;
                matrix[1][y-1] = 1;
                matrix[1][y+1] = 1;
            }
            else if(x == rows && y != 0 && y!= cols) { //bottom row not corners
                matrix[rows][y+1] = 1;
                matrix[rows][y-1] = 1;
                matrix[rows-1][y] = 1;
                matrix[rows-1][y+1] = 1;
                matrix[rows-1][y-1] = 1;
            }
            else if(x != 0 && x != rows && y == 0){ //left side edge no corners
                matrix[x+1][y] = 1;
                matrix[x+1][y+1] = 1;
                matrix[x][y+1] = 1;
                matrix[x-1][y+1] = 1;
                matrix[x-1][y] = 1;
            }
            else if(x!= 0 && x!= rows && y== cols) { //right side edge no corners
                matrix[x+1][y] = 1;
                matrix[x+1][y-1] = 1;
                matrix[x][y-1] = 1;
                matrix[x-1][y-1] = 1;
                matrix[x-1][y] = 1;
            }
            else{ //everything else
                matrix[x][y+1] = 1;
                matrix[x][y-1] = 1;
                matrix[x+1][y] = 1;
                matrix[x-1][y] = 1;
                matrix[x+1][y+1] = 1;
                matrix[x+1][y-1] = 1;
                matrix[x-1][y+1] = 1;
                matrix[x-1][y-1] = 1;
            }
       


            //check road adjacency
                for(int i = 0; i < rows; i++) {
                    for(int j =0; j < cols; j++) { 
                        if(matrix[i][j] == 1){
                            if(arr[i][j] == '-') {
                                                if(i == 0 && j == 0) { //top left corner
                                                    if(arr[0][1] == '-'){
                                                        matrix[0][1] = 1;
                                                    }
                                                    if(arr[1][1] == '-'){
                                                        matrix[1][1] = 1;
                                                    }
                                                    if(arr[0][1] == '-'){
                                                        matrix[1][0] = 1;
                                                    }
                                                }
                                                else if(i == 0 && j == cols) { //top right corner
                                                    if(arr[0][j-1] == '-'){
                                                        matrix[0][cols-1] = 1;
                                                    }
                                                    if(arr[1][j-1] == '-'){
                                                        matrix[1][cols-1] = 1;
                                                    }
                                                    if(arr[1][j] == '-'){
                                                        matrix[1][cols] = 1;
                                                    }
                                                }
                                                else if(i == rows && j == 0) { //bottom left corner
                                                    if(arr[i][1] == '-'){
                                                        matrix[rows][1] = 1;
                                                    }
                                                    if(arr[i-1][1] == '-'){
                                                        matrix[rows-1][1] = 1;
                                                    }
                                                    if(arr[1][0] == '-'){
                                                        matrix[rows-1][0] = 1;
                                                    }
                                                }
                                                else if(i == rows && j == cols) { //bottom right corner
                                                    if(arr[i][j-1] == '-'){
                                                        matrix[rows][cols-1] = 1;
                                                    }
                                                    if(arr[i-1][j-1] == '-'){
                                                        matrix[rows-1][cols-1] = 1;
                                                    }
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[rows-1][cols] = 1;
                                                    }
                                                }
                                                else if(i==0 && j != 0 && j!= cols) //top row not corners
                                                {
                                                    if(arr[0][j+1] == '-'){
                                                        matrix[0][j+1] = 1;
                                                    }
                                                    if(arr[0][j-1] == '-'){
                                                        matrix[0][j-1] = 1;
                                                    }
                                                    if(arr[1][j] == '-'){
                                                        matrix[1][j] = 1;
                                                    }
                                                    if(arr[1][j-1] == '-'){
                                                        matrix[1][j-1] = 1;
                                                    }
                                                    if(arr[1][j+1] == '-'){
                                                        matrix[1][j+1] = 1;
                                                    }
                                                }
                                                else if(i == rows && j != 0 && j!= cols) { //bottom row not corners
                                                    if(arr[i][j+1] == '-'){
                                                        matrix[rows][j+1] = 1;
                                                    }
                                                    if(arr[i][j-1] == '-'){
                                                        matrix[rows][j-1] = 1;
                                                    }
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[rows-1][j] = 1;
                                                    }
                                                    if(arr[i-1][j+1] == '-'){
                                                        matrix[rows-1][j+1] = 1;
                                                    }
                                                    if(arr[i-1][j-1] == '-'){
                                                        matrix[rows-1][j-1] = 1;
                                                    }
                                                }
                                                else if(i != 0 && i != rows && j == 0){ //left side edge no corners
                                                    if(arr[i+1][j] == '-'){
                                                        matrix[i+1][j] = 1;
                                                    }
                                                    if(arr[i+1][j+1] == '-'){
                                                        matrix[i+1][j+1] = 1;
                                                    }
                                                    if(arr[i][j+1] == '-'){
                                                        matrix[i][j+1] = 1;
                                                    }
                                                    if(arr[i-1][j+1] == '-'){
                                                        matrix[i-1][j+1] = 1;
                                                    }
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[i-1][j] = 1;
                                                    }
                                                }
                                                else if(i!= 0 && i!= rows && j== cols) { //right side edge no corners
                                                    if(arr[i+1][j] == '-'){
                                                        matrix[i+1][j] = 1;
                                                    }
                                                    if(arr[i+1][j-1] == '-'){
                                                        matrix[i+1][j-1] = 1;
                                                    }
                                                    if(arr[i][j-1] == '-'){
                                                        matrix[i][j-1] = 1;
                                                    }
                                                    if(arr[i-1][j-1] == '-'){
                                                        matrix[i-1][j-1] = 1;
                                                    }
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[i-1][j] = 1;
                                                    }
                                                }
                                                else{ //everything else
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[i-1][j] = 1;
                                                    }
                                                    if(arr[i][j-1] == '-'){
                                                        matrix[i][j-1] = 1;
                                                    }
                                                    if(arr[i+1][j] == '-'){
                                                        matrix[i+1][j] = 1;
                                                    }
                                                    if(arr[i-1][j] == '-'){
                                                        matrix[i-1][j] = 1;
                                                    }
                                                    if(arr[i+1][j+1] == '-'){
                                                        matrix[i+1][j+1] = 1;
                                                    }
                                                    if(arr[i+1][j-1] == '-'){
                                                        matrix[i+1][j-1] = 1;
                                                    }
                                                    if(arr[i-1][j+1] == '-'){
                                                        matrix[i-1][j+1] = 1;
                                                    }
                                                    if(arr[i-1][j-1] == '-'){
                                                        matrix[i-1][j-1] = 1;
                                                    }
                                                }

                                }

                            }
                        }
                    }

                    
                    for(int i = 0; i < rows; i++){ //make everything adjacent to a road a 1
                      for(int j = 0; j < cols; j++){
                        if(matrix[i][j] == 1 && arr[i][j] == '-'){
                         if(i == 0 && j == 0) { //top left corner
                                              matrix[0][1] = 1;
                                              matrix[1][1] = 1;
                                              matrix[1][0] = 1;
                          }
                          else if(i == 0 && j == cols) { //top right corner
                                              matrix[0][j-1] = 1;
                                              matrix[1][j-1] = 1;
                                              matrix[1][j] = 1;
                          }
                          else if(i == rows && j == 0) { //bottom left corner
                                              matrix[i][1] = 1;
                                              matrix[i-1][1] = 1;
                                              matrix[i-1][0] = 1;
                          }
                          else if(i == rows && j == cols) { //bottom right corner
                              matrix[i][j-1] = 1;
                              matrix[i-1][j-1] = 1;
                              matrix[i-1][j] = 1;
                          }
                          else if(i==0 && j != 0 && j!= cols) //top row not corners
                          {
                              matrix[0][j+1] = 1;
                              matrix[0][j-1] = 1;
                              matrix[1][j] = 1;
                              matrix[1][j-1] = 1;
                              matrix[1][j+1] = 1;
                          }
                          else if(x == i && y != 0 && y!= cols) { //bottom row not corners
                              matrix[i][j+1] = 1;
                              matrix[i][j-1] = 1;
                              matrix[i-1][j] = 1;
                              matrix[i-1][j+1] = 1;
                              matrix[i-1][j-1] = 1;
                          }
                          else if(i != 0 && i != rows && j == 0){ //left side edge no corners
                              matrix[i+1][j] = 1;
                              matrix[i+1][j+1] = 1;
                              matrix[i][j+1] = 1;
                              matrix[i-1][j+1] = 1;
                              matrix[i-1][j] = 1;
                          }
                          else if(i!= 0 && i!= rows && j== cols) { //right side edge no corners
                              matrix[i+1][j] = 1;
                              matrix[i+1][j-1] = 1;
                              matrix[i][j-1] = 1;
                              matrix[i-1][j-1] = 1;
                              matrix[i-1][j] = 1;
                          }
                          else{ //everything else
                              matrix[i][j+1] = 1;
                              matrix[i][j-1] = 1;
                              matrix[i+1][j] = 1;
                              matrix[i-1][j] = 1;
                              matrix[i+1][j+1] = 1;
                              matrix[i+1][j-1] = 1;
                              matrix[i-1][j+1] = 1;
                              matrix[i-1][j-1] = 1;
                          }
                        }
                      }
                    }
                    for(int i =0; i < rows; i++){ //set all roads back to zero
                      for(int j =0; j < cols; j++){
                        if(arr[i][j] == '-'){
                          matrix[i][j] = 0;
                        }
                      }
                    }
                    matrix[x][y] = 0;
                    return;
                }
