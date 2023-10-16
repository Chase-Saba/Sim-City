#include <iostream>
  #include <string>
  #include <fstream>
  #include "operations.h"
  
  using namespace std;
  
  void operations::readConfig(){
  
  //open config file
  ifstream configFile;
  
  configFile.open("config1.txt");
  
  //if file is not found
  if(configFile.fail()){
	  cout << "Could not open file" << endl << "Terminating..." << endl;;
    exit(EXIT_FAILURE);
  }
  
  //values for reading file
  string layout, tString, rString;
  int time, ref;
 	  
  //reads in portions of file separated by endline, then iterates through and erases section of string before the ";"   
  getline(configFile, layout, '\n');
   for(int i=0;i<layout.size();++i){
	   if(layout[i]==':'){
		  layout.erase(0,i+1);
	   }
   }
      cout<<"Region Layout: "<<layout<<endl;
  
  getline(configFile, tString, '\n');
  for(int i=0;i<tString.size();++i){
	   if(tString[i]==':'){
		  tString.erase(0,i+1);
	   }
   }
       time=stoi(tString);
	  cout<<"Time limit: "<<time<<endl;
	  
	  
	  getline(configFile, rString, '\n');
  for(int i=0;i<rString.size();++i){
	   if(rString[i]==':'){
		  rString.erase(0,i+1);
	   }
   }
         ref=stoi(rString);
	  cout<<"Refresh Rate: "<<ref<<endl;
	
	  
//closing file
  configFile.close();
  return;
  }
