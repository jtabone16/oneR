/****************************************************
 * oneR.cc
 * Authors: Patrick Durgin, Andrew Rocha, and John Tabone
 * Date: 4/1/14
 * Class: CSCI-399
 * Purpose: Implement OneR machine learning algorithm
 * Input: User-selected .arff file
 * Output:  Success and error rate of algorithm
 ****************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

struct attributes {
   string attrib[5]; 
   int value_count[3];
}

int attrib_count = 0;

//prototypes
void readARFF(string);

int main (void){

   string arff; //name of arff file

   cout << "Please enter name and extension of file to apply OneR algorithm to: ";
   cin >> arff;
   
   readARFF(arff);




}

void readARFF (string arff){
   string line;
   ifstream myFile;
   myFile.open(arff.c_str());

   if (myFile.is_open()){
      while (getline (myFile, line)){
	 if (line.find("@attribute") != std::string::npos){
	    //get attrib names
	    unsigned first = line.find("e");
	    unsigned last =  line.find("{", first);
	    string attrib = line.substr(first+2, last-first-2);
	    attrib_count++;
	    
	    //get possible attrib values
	    unsigned start = line.find("{");
	    unsigned end = line.find("}");
	    string attrib_values = line.substr(start, end);
	    cout << attrib_values<<endl;

	    attribute attrib
	 }



      }
   }
   


}



