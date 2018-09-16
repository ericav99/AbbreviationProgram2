// Testing Client Program for class Key
// filename: testingclient.cpp
// Eric Av and Ryan Brown
// 9/15/18
// The client.cpp file will test all the methods from item.cpp and key.cpp.
// The tests will show that each method works for their intended purposes
// with user input or reading from a file. The client.cpp file will also
// show the textingAbbreviation and meaning data members functioning within
// their respective tests. Each test has it's own function outside of int main
// which is called in int main.

#include "key.h"
#include "item.h"
#include <iostream>
#include <fstream>
using namespace std;

void testKeyConstructor();
void testKeyInOut();
void testConvertToInteger();
void testKeyOperatorEquals();
void testKeyOperatorEE();
void test
int main()
{
   int convertedNumber;
   
   cout << endl << endl;    // to move first output away from command prompt 
   
   testKeyConstructor();
   cout<<endl;
   testKeyInOut();
   cout<<endl;
   testConvertToInteger();
   cout<<endl;
   testKeyOperatorEquals();
   cout<<endl;
   testKeyOperatorEE();
   cout<<endl;
   
   
   return 0;
}

void testKeyConstructor()
{
   Key firstOne;
   cout << "          Testing the constructor for Key" << endl;
   cout << "string is empty and show nothing between # signs" << endl;
   cout << "#";
   cout<<firstOne;;//displays the empty string textingAbbreviation
   cout << "#" << endl;
   cout << endl;
}

void testKeyInOut()
{
   Key firstOne, secondOne, thirdOne;
   ifstream inFile;
   ofstream outFile;
   
   cout << "          Testing the read from a user and write to the screen " << endl;
   cout << "Enter a texting abbreviations -> ";  // note the arrow to show the user where to type and left on same line
   cin>> firstOne >> secondOne >> thirdOne; // user input to textingAbbreviation
   cout << "shows result between # signs" << endl;
   cout << "#";
   cout<< firstOne << "# " << secondOne << "# " << thirdOne;// displays the user inputed textingAbbreviation
   cout << "#" << endl;
   cout << endl;
   
   cout << "Testing the read from a file and write to a file "<<endl;  // note the arrow to show the user where to type and left on same line
   cout<< "Reading from the file...";
   inFile.open("in.dat");//opens the in.dat file
   inFile>> firstOne >> secondOne >> thirdOne;//reads the in.dat file into the textingAbbreviation of instance firstOne, secondOne, and thirdOne.
   outFile.open("out.dat");//opens the out.dat file
   cout<< "writing in.dat to out.dat "<< endl; 
   outFile<< firstOne << secondOne << thirdOne;//writes the textingAbbreviation of instance firstOne, secondOne, and thirdOne into the out.dat file
   cout << endl;
}

void testConvertToInteger()
{
   Key firstOne;
   cout<< "Enter a texting abbreviation for for the ConvertToInteger test: ";
   cin>>firstOne;
   cout << "Testing the convertToInteger and shows result to the screen between # signs" << endl;
   cout << "#";
   cout<< firstOne.convertToInteger(); // calls the convertToInteger function for the instance firstOne. 
   //Will display the sum of the ascii numbers corresponding to each character in the string textingAbbreviation
   cout<< "#";
   cout<< endl<<endl;
}

void testKeyOperatorEquals()
{
   Key firstOne;
   Key secondOne;
   
   cout<< "Testing the operator= function for key" <<endl;
   cout<< "Enter textingAbbreviation for firstOne: ";
   cin>>firstOne;
   cout<< "Enter textingAbbreviation for secondOne: ";
   cin>>secondOne;
   
   cout << "Showing the first textingAbbreviation between # signs" << endl;
   cout << "#";
   cout<<firstOne;//displays the textingAbbreviation from instance firstOne.
   cout<< "#"<<endl;
   cout<< "Showing the second textingAbbreviation between # signs" <<endl;
   cout<< "#";
   cout<<secondOne;//displays the textingAbbreviation from instance secondOne.
   cout<<"#";
   
   cout<<endl<<endl;
   cout<<" Assigning the firstOne to the secondOne "<<endl;
   secondOne = firstOne;//Copies the textingAbbreviation from instance firstOne over to the empty textingAbbreviation of instance secondOne
   cout<<endl;
   cout << "Showing that the secondOne got assigned between # signs" << endl;
   cout << "#";
   cout<<secondOne;//Shows that the textingAbbreviation in instance secondOne matches that from instance firstOne
   cout<< "#"<<endl;
}

void testKeyOperatorEE()
{
   Key firstOne;
   Key secondOne;
   
   cout<< "Testing the operator== function for key" <<endl;
   cout<< "Enter textingAbbreviation for firstOne: ";
   cin>>firstOne;
   cout<< "Enter textingAbbreviation for secondOne: ";
   cin>>secondOne;
   
   cout << "Showing the first textingAbbreviation between # signs" << endl;
   cout << "#";
   cout<<firstOne;//displays the textingAbbreviation from instance firstOne.
   cout<< "#"<<endl;
   cout<< "Showing the second textingAbbreviation between # signs" <<endl;
   cout<< "#";
   cout<<secondOne;//displays the textingAbbreviation from instance secondOne.
   cout<<"#"<<endl;
   
   cout<< "Checking to see if they are equal in value..."<<endl;
   if (firstOne == secondOne)
   {
	   cout<< firstOne << " is the same as " << secondOne <<endl;
   }
   else 
	   cout<< firstOne << " is not the same as " << secondOne <<endl;
}

void 
