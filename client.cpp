// Testing Client Program for class Key
// filename: testingclient.cpp
//Ryan Brown
#include "key.h"
#include "item.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   Key firstOne;
   Key secondOne;
   ifstream InFile;
   ofstream OutFile;
   int convertedNumber;
   
   cout << endl << endl;    // to move first output away from command prompt 
   
   cout << "          Testing the constructor" << endl;
   cout << "string is empty and show nothing between # signs" << endl;
   cout << "#";
   firstOne.write(cout);//displays the empty string textingAbbreviation
   cout << "#" << endl;
   cout << endl;
   
   cout << "          Testing the read from a user and write to the screen " << endl;
   cout << "Enter a texting abbreviations -> ";  // note the arrow to show the user where to type and left on same line
   firstOne.read(cin); // user input to textingAbbreviation
   cout << "shows result between # signs" << endl;
   cout << "#";
   firstOne.write(cout);// displays the user inputed textingAbbreviation
   cout << "#" << endl;
   cout << endl;
   
   cout << "Testing the read from a file and write to a file "<<endl;  // note the arrow to show the user where to type and left on same line
   cout<< "Reading from the file...";
   InFile.open("in.dat");//opens the in.dat file
   firstOne.read(InFile);//reads the in.dat file into the textingAbbreviation of instance firstOne.
   OutFile.open("out.dat");//opens the out.dat file
   cout<< "writing in.dat to out.dat "<< endl; 
   firstOne.write(OutFile);//writes the textingAbbreviation of instance firstOne into the out.dat file
   cout << endl<<endl;
   
   cout << "Testing the convertToInteger and shows result to the screen between # signs" << endl;
   cout << "#";
   cout<< firstOne.convertToInteger(); // calls the convertToInteger function for the instance firstOne. 
   //Will display the sum of the ascii numbers corresponding to each character in the string textingAbbreviation
   cout<< "#";
   cout<< endl<<endl;
   
   cout<< "Testing the assign function " <<endl;
   cout << "Showing the first textingAbbreviation between # signs" << endl;
   cout << "#";
   firstOne.write(cout);//displays the textingAbbreviation from instance firstOne.
   cout<< "#";
   cout<<endl<<endl;
   cout<<" Assigning the firstOne to the secondOne "<<endl;
	secondOne.assign(firstOne);//Copies the textingAbbreviation from instance firstOne over to the empty textingAbbreviation of instance secondOne
	cout<<endl;
	cout << "Showing that the secondOne got assigned between # signs" << endl;
   cout << "#";
   secondOne.write(cout);//Shows that the textingAbbreviation in instance secondOne matches that from instance firstOne
   cout<< "#"<<endl;
   
   return 0;
}