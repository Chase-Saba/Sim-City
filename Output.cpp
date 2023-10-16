#include "operations.h"


void Output(char arr[100][100], int rows, int cols, int** cellMatrix) {


        //Output the final region state
        for (int i = 0; i < rows; i++) { //making sure everything was put into the array correctly
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }


       //Output the total, regional population for residential zones, industrial zones, and commercial zones
       int Rsum = 0;
       int Isum = 0;
       int Csum = 0;
       for (int i = 0; i < rows; i++) { //loop through matrix and get population for each node and add to respected type sum
            for (int j = 0; j < cols; j++) {
                if(arr[i][j] == 'R') {
                    //Rsum+= cellMatrix.getPop();
                }
                if(arr[i][j] == 'C') {
                    //Csum+= cellMatrix.getPop();
                }
                if(arr[i][j] == 'I') {
                    //Isum+= cellMatrix.getPop();
                }
            }
            
        }
        cout << "Total Residential Population: " << Rsum << endl;
        cout << "Total Commercial Population: " << Csum << endl;
        cout << "Total Industrial Population: " << Isum << endl;


        //Output the final regional pollution state
        int rPollution = 0;
        int iPollution = 0;
        int cPollution = 0;

        for (int i = 0; i < rows; i++) { //loop through matrix and get population for each node and add to respected type sum
            for (int j = 0; j < cols; j++) {
                if(arr[i][j] == 'R') {
                    //rPollution+= cellMatrix.getPoll();
                }
                if(arr[i][j] == 'C') {
                    //cPollution+= cellMatrix.getPoll();
                }
                if(arr[i][j] == 'I') {
                    //iPollution+= cellMatrix.getPoll();
                }
            }
            
        }
        cout << "Total Residential Pollution: " << rPollution << endl;
        cout << "Total Commercial Pollution: " << cPollution << endl;
        cout << "Total Industrial Pollution: " << iPollution << endl;
        //Output the total pollution in the region

        cout << "Total Pollution: " << rPollution + cPollution + iPollution << endl;


         //Prompt the user for the coordinates of some rectangular area of the region to analyze more closely

        cout << "Enter a x-coordinate to examine closer: ";
        int xCord;
        int yCord;
        cin >> xCord;
        cout<<"Enter a y-coordinate to examine closer: ";
        cin >> yCord;


         //You must perform bounds checking to make sure the coordinates are within the bounds of the region, and re-prompt the user if their  coordinates are outside the bounds
        if(xCord <= rows && yCord <= cols && xCord > -1 && yCord > -1) {

        }
        else{
            cout <<"Outside of bounds, try again" << endl;
            cout << "Enter a x-coordinate to examine closer: ";
            cin >> xCord;
            cout<<"Enter a y-coordinate to examine closer: ";
            cin >> yCord;
        }

         //Output the total population for residential zones, industrial zones, and commercial zones within the area specified by the user
         
         cout << "Total population of zone specified by user: ";
         //call adjmatrix for node and access node info for each node thats adjacent

         
        // Output the total pollution within the area specified by the user 
        cout << "Total pollution of zone specified by user: ";
        //call adjmatrix for node and access node info for each node thats adjacent
        
    return;
}
